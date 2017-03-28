#include"HT1621B.H"
#define DelayForLcd  2

//�����������������һ����ʾ����������16���ֽڣ�128λ
u16 xdata lcd_buffer[8]={10,10,10,10,0,0,0,0};
u8 Foold_Lcd_TimeCount=0;

void lcd_IOInit(void)
{
    P0MDIN|=0X0F;    //IO����
    //P0MDOUT&=0xF0;  
    P0MDOUT|=0x0F;  //�������
    P0SKIP&=0xF0;
    //RD_HIGH;
}

//�������������HT1621Bд��һ������û�������Ҫ���������ӱ�Ҫ����ʱ
void send_lcd_command(u8 command)
{
    u8 i;
   CS_LOW;
   
   WR_LOW;        //PRESENT 100 COMMAND CODE
   DATA_HIGH;
   Delay_500ns(DelayForLcd);
   WR_HIGH;
   Delay_500ns(DelayForLcd);
   WR_LOW;
   DATA_LOW;
   Delay_500ns(DelayForLcd);
   WR_HIGH;
   Delay_500ns(DelayForLcd);  
   WR_LOW;
   Delay_500ns(DelayForLcd);
   WR_HIGH;   
   Delay_500ns(DelayForLcd);
   for (i =0;i<=7;i++)
    {
       WR_LOW;
       if ((command & 0x80) !=0) DATA_HIGH;
        else DATA_LOW;
       Delay_500ns(DelayForLcd);
       WR_HIGH;
       command = command << 1;
       Delay_500ns(DelayForLcd);
    }
   
   WR_LOW;
   Delay_500ns(DelayForLcd);
   WR_HIGH;     
   CS_HIGH;
}

//�������������HT1621Bд��һ�����ݣ��û�������Ҫ���������ӱ�Ҫ����ʱ
void send_lcd_data(u8 address,u8 Data)
{
    u8 i;
   CS_LOW;

   WR_LOW;        //PRESENT 101 DATA CODE
   DATA_HIGH;
   Delay_500ns(DelayForLcd);
   WR_HIGH;
   Delay_500ns(DelayForLcd);
   WR_LOW;
   DATA_LOW;
   Delay_500ns(DelayForLcd);
   WR_HIGH; 
   Delay_500ns(DelayForLcd);
   WR_LOW;
   DATA_HIGH;
   Delay_500ns(DelayForLcd);
   WR_HIGH; 
   Delay_500ns(DelayForLcd);
   address = address << 2;
   for ( i =0;i<=5;i++)
    {
       WR_LOW;
       if ((address & 0x80) !=0) DATA_HIGH;
        else DATA_LOW;
       Delay_500ns(DelayForLcd);
       WR_HIGH;
       address = address << 1;
       Delay_500ns(DelayForLcd);
    }
   
    for (i =0;i<=3;i++)
    {
       WR_LOW;
       if ((Data & 0x01) !=0) DATA_HIGH;
        else DATA_LOW;
       Delay_500ns(DelayForLcd);
       WR_HIGH;
       Data = Data >> 1;
       Delay_500ns(DelayForLcd);
    } 
   
   CS_HIGH;
}
//����������Խ���ʾ������ˢ�µ�HT1621B���û�������Ҫ���������ӱ�Ҫ����ʱ
void flood_lcd_data(void)
{
u16 temp_data;
u8 i,j;
CS_LOW;

   WR_LOW;        //PRESENT 101 DATA CODE
   DATA_HIGH;
   Delay_500ns(DelayForLcd);
   WR_HIGH;
   Delay_500ns(DelayForLcd);
   WR_LOW;
   DATA_LOW;
   Delay_500ns(DelayForLcd);
   WR_HIGH; 
   Delay_500ns(DelayForLcd);
   WR_LOW;
   DATA_HIGH;
   Delay_500ns(DelayForLcd);
   WR_HIGH; 
   Delay_500ns(DelayForLcd);
for (i =0;i<=5;i++)
    {
       WR_LOW;
       DATA_LOW;
       Delay_500ns(DelayForLcd);
       WR_HIGH;
       Delay_500ns(DelayForLcd);
    }
   
for (i =0;i<=7;i++)
    {
      temp_data = lcd_buffer[i];
      for (j=0;j<=15;j++)
      {
       WR_LOW;
       if ((temp_data & 0x01) !=0) DATA_HIGH;
        else DATA_LOW;
       Delay_500ns(DelayForLcd);
       WR_HIGH;
       temp_data = temp_data >> 1;
       Delay_500ns(DelayForLcd);
      }
    } 
   
   CS_HIGH;
}

//��ʼ��HT1621B
void lcd_init(void)
{
   send_lcd_command(0x28); //1/2bias��4comm
   send_lcd_command(0x03); //����ʾ
   send_lcd_command(0x01); //�����ڲ�����
}

//��Һ��дһ������
//name����ֱ��д0~127��������Ҳ����д����ʼ����ı�ţ��磺_lcd_BUSY
//display������
void lcd_char(u8 name,u8 display)
{
u8 i,j;
i= name/16;
j= name%16;
if (display == 1) lcd_buffer[i] |= 1<<j;
else lcd_buffer[i] &= ~(1<<j);
flood_lcd_data(); 

}

//���ȫ��Һ������ʾ��ͬʱ�����ʾ������
void lcd_clr()
{
    u16 i;
for (i=0; i<=7;i++) lcd_buffer[i]=0;
flood_lcd_data();   
    
}

//��Һ������λ��дһ��0~9���� 
//��λΪ�������������Ϊ4~9��С�����������Ϊ0~3��
//number������ʾ���� 0~9
//position����ʾ����λ
//display����ʾ���أ�0 �رո���λ��ʾ����ʱnumberֵ��Ч����1 ��ʾ����λ����
void lcd_number(u8 number,u8 position,u8 display)
{
switch (position)
{
case 0:
    {
    if (display == 0) lcd_buffer[0] &=0xff10; //0x10ff;
    else 
    {
       lcd_buffer[0] &= 0xff10;//0x10ff;
      switch (number)
    {
    case 0:lcd_buffer[0] |= 0x00EB;
      break;
    case 1:lcd_buffer[0] |= 0x0060;
      break;
    case 2:lcd_buffer[0] |= 0x00C7;
      break;
    case 3:lcd_buffer[0] |= 0x00E5;
      break;
    case 4:lcd_buffer[0] |= 0x006C;
      break;
    case 5:lcd_buffer[0] |= 0x00AD;
      break;
    case 6:lcd_buffer[0] |= 0x00AF;
      break;
    case 7:lcd_buffer[0] |= 0x00E0;
      break;
    case 8:lcd_buffer[0] |= 0x00EF;
      break; 
    case 9:lcd_buffer[0] |= 0x00ED;
      break;
    case 15:lcd_buffer[0] &= 0xff00;   //ȫ��
      break;      
    }}
    break;
    }
case 1:
    {
    if (display == 0) lcd_buffer[0] &= 0x10ff;
    else 
    {
       lcd_buffer[0] &= 0x10ff;
      switch (number)
    {
    case 0:lcd_buffer[0] |= 0xEB00;
      break;
    case 1:lcd_buffer[0] |= 0x6000;
      break;
    case 2:lcd_buffer[0] |= 0xC700;
      break;
    case 3:lcd_buffer[0] |= 0xE500;
      break;
    case 4:lcd_buffer[0] |= 0x6C00;
      break;
    case 5:lcd_buffer[0] |= 0xAD00;
      break;
    case 6:lcd_buffer[0] |= 0xAF00;
      break;
    case 7:lcd_buffer[0] |= 0xE000;
      break;
    case 8:lcd_buffer[0] |= 0xEF00;
      break; 
    case 9:lcd_buffer[0] |= 0xED00;
      break;
    case 15:lcd_buffer[0] &= 0x00ff;   //ȫ��
      break;      
    }}
    break;
    }
case 2:
     lcd_buffer[1] &=0xff10;
     //lcd_buffer[2] &= 0xfff1;

     if (display == 0) break;
    
    else switch (number)
    {
    case 0:lcd_buffer[1] |= 0x00EB;
      break;
    case 1:lcd_buffer[1] |= 0x0060;
      break;
    case 2:lcd_buffer[1] |= 0x00C7;
      break;
    case 3:lcd_buffer[1] |= 0x00E5;
      break;
    case 4:lcd_buffer[1] |= 0x006C;
      break;
    case 5:lcd_buffer[1] |= 0x00AD;
      break;
    case 6:lcd_buffer[1] |= 0x00AF;
      break;
    case 7:lcd_buffer[1] |= 0x00E0;
      break;
    case 8:lcd_buffer[1] |= 0x00EF;
      break; 
    case 9:lcd_buffer[1] |= 0x00ED;
      break;
    case 15:lcd_buffer[1] &= 0xff00;   //ȫ��
      break;     
    }
    break;
case 3:
    lcd_buffer[1] &= 0x10ff;
    if (display == 0) break;
    else switch (number)
    {
    case 0:lcd_buffer[1] |= 0xEB00;
      break;
    case 1:lcd_buffer[1] |= 0x6000;
      break;
    case 2:lcd_buffer[1] |= 0xC700;
      break;
    case 3:lcd_buffer[1] |= 0xE500;
      break;
    case 4:lcd_buffer[1] |= 0x6C00;
      break;
    case 5:lcd_buffer[1] |= 0xAD00;
      break;
    case 6:lcd_buffer[1] |= 0xAF00;
      break;
    case 7:lcd_buffer[1] |= 0xE000;
      break;
    case 8:lcd_buffer[1] |= 0xEF00;
      break; 
    case 9:lcd_buffer[1] |= 0xED00;
      break;
    case 15:lcd_buffer[1] &= 0x00ff;   //ȫ��
      break;     
    }
    break;
case 4:
    lcd_buffer[2] &= 0x0fff;
    lcd_buffer[3] &= 0xfff8;
    if (display == 0) break;
    else switch (number)
    {
    case 0:lcd_buffer[2] |= 0xD000;
           lcd_buffer[3] |= 0x0007;
      break;
    case 1:lcd_buffer[2] |= 0x0000;
           lcd_buffer[3] |= 0x0006;
      break;
    case 2:lcd_buffer[2] |= 0xE000;
           lcd_buffer[3] |= 0x0003;
      break;
    case 3:lcd_buffer[2] |= 0xA000;
           lcd_buffer[3] |= 0x0007;
      break;
    case 4:lcd_buffer[2] |= 0x3000;
           lcd_buffer[3] |= 0x0006;
      break;
    case 5:lcd_buffer[2] |= 0xB000;
           lcd_buffer[3] |= 0x0005;
      break;
    case 6:lcd_buffer[2] |= 0xF000;
           lcd_buffer[3] |= 0x0005;
      break;
    case 7:lcd_buffer[2] |= 0x0000;
           lcd_buffer[3] |= 0x0007;
      break;
    case 8:lcd_buffer[2] |= 0xF000;
           lcd_buffer[3] |= 0x0007;
      break; 
    case 9:lcd_buffer[2] |= 0xB000;
           lcd_buffer[3] |= 0x0007;
      break; 
    case 15:lcd_buffer[2] &= 0x0fff;   //ȫ��
            lcd_buffer[3] &= 0xfff0;   //ȫ��
      break;      
    }
    break;
case 5:
    lcd_buffer[3] &= 0xF80F;
    if (display == 0) break;
    else switch (number)
    {
    case 0:lcd_buffer[3] |= 0x07D0;
      break;
    case 1:lcd_buffer[3] |= 0x0600;
      break;
    case 2:lcd_buffer[3] |= 0x03E0;
      break;
    case 3:lcd_buffer[3] |= 0x07A0;
      break;
    case 4:lcd_buffer[3] |= 0x0630;
      break;
    case 5:lcd_buffer[3] |= 0x05B0;
      break;
    case 6:lcd_buffer[3] |= 0x05F0;
      break;
    case 7:lcd_buffer[3] |= 0x0700;
      break;
    case 8:lcd_buffer[3] |= 0x07F0;
      break; 
    case 9:lcd_buffer[3] |= 0x07B0;
      break; 
    case 15:lcd_buffer[3] &= 0xF00F;
      break;      
    }
    break;
case 6:
     lcd_buffer[3] &=0x0fff;
     lcd_buffer[4] &= 0xfff8;
    if (display == 0) break;
    else switch (number)
    {
    case 0:lcd_buffer[3] |= 0xD000;
           lcd_buffer[4] |= 0x0007;
      break;
    case 1:lcd_buffer[3] |= 0x0000;
           lcd_buffer[4] |= 0x0006;
      break;
    case 2:lcd_buffer[3] |= 0xE000;
           lcd_buffer[4] |= 0x0003;
      break;
    case 3:lcd_buffer[3] |= 0xA000;
           lcd_buffer[4] |= 0x0007;
      break;
    case 4:lcd_buffer[3] |= 0x3000;
           lcd_buffer[4] |= 0x0006;
      break;
    case 5:lcd_buffer[3] |= 0xB000;
           lcd_buffer[4] |= 0x0005;
      break;
    case 6:lcd_buffer[3] |= 0xF000;
           lcd_buffer[4] |= 0x0005;
      break;
    case 7:lcd_buffer[3] |= 0x0000;
           lcd_buffer[4] |= 0x0007;
      break;
    case 8:lcd_buffer[3] |= 0xF000;
           lcd_buffer[4] |= 0x0007;
      break; 
    case 9:lcd_buffer[3] |= 0xB000;
           lcd_buffer[4] |= 0x0007;
      break; 
    case 15:lcd_buffer[3] &= 0x0fff;   //ȫ��
            lcd_buffer[4] &= 0xfff0;   //ȫ��
      break;       
    }
    break;
case 7:
    lcd_buffer[4] &=0x0fff;
    lcd_buffer[5] &=0xfff8;
    if (display == 0) break;
    else switch (number)
    {
    case 0:lcd_buffer[4] |= 0xD000;
           lcd_buffer[5] |= 0x0007;
      break;
    case 1:lcd_buffer[4] |= 0x0000;
           lcd_buffer[5] |= 0x0006;
      break;
    case 2:lcd_buffer[4] |= 0xE000;
           lcd_buffer[5] |= 0x0003;
      break;
    case 3:lcd_buffer[4] |= 0xA000;
           lcd_buffer[5] |= 0x0007;
      break;
    case 4:lcd_buffer[4] |= 0x3000;
           lcd_buffer[5] |= 0x0006;
      break;
    case 5:lcd_buffer[4] |= 0xB000;
           lcd_buffer[5] |= 0x0005;
      break;
    case 6:lcd_buffer[4] |= 0xF000;
           lcd_buffer[5] |= 0x0005;
      break;
    case 7:lcd_buffer[4] |= 0x0000;
           lcd_buffer[5] |= 0x0007;
      break;
    case 8:lcd_buffer[4] |= 0xF000;
           lcd_buffer[5] |= 0x0007;
      break; 
    case 9:lcd_buffer[4] |= 0xB000;
           lcd_buffer[5] |= 0x0007;
      break; 
    case 15:lcd_buffer[4] &= 0x0fff;   //ȫ��
            lcd_buffer[5] &= 0xfff0;   //ȫ��
      break;       
    }
    break;
case 8:
     lcd_buffer[5] &= 0xF80F;
    if (display == 0) break;
    else switch (number)
    {
    case 0:lcd_buffer[5] |= 0x07D0;
      break;
    case 1:lcd_buffer[5] |= 0x0600;
      break;
    case 2:lcd_buffer[5] |= 0x03E0;
      break;
    case 3:lcd_buffer[5] |= 0x07A0;
      break;
    case 4:lcd_buffer[5] |= 0x0630;
      break;
    case 5:lcd_buffer[5] |= 0x05B0;
      break;
    case 6:lcd_buffer[5] |= 0x05F0;
      break;
    case 7:lcd_buffer[5] |= 0x0700;
      break;
    case 8:lcd_buffer[5] |= 0x07F0;
      break; 
    case 9:lcd_buffer[5] |= 0x07B0;
      break;  
    case 15:lcd_buffer[5] &= 0xF00F;
      break;      
    }
    break;
case 9:
    lcd_buffer[5] &=0x0fff;
    lcd_buffer[6] &=0xfff8;
    if (display == 0) break;
    else switch (number)
    {
    case 0:lcd_buffer[5] |= 0xD000;
           lcd_buffer[6] |= 0x0007;
      break;
    case 1:lcd_buffer[5] |= 0x0000;
           lcd_buffer[6] |= 0x0006;
      break;
    case 2:lcd_buffer[5] |= 0xE000;
           lcd_buffer[6] |= 0x0003;
      break;
    case 3:lcd_buffer[5] |= 0xA000;
           lcd_buffer[6] |= 0x0007;
      break;
    case 4:lcd_buffer[5] |= 0x3000;
           lcd_buffer[6] |= 0x0006;
      break;
    case 5:lcd_buffer[5] |= 0xB000;
           lcd_buffer[6] |= 0x0005;
      break;
    case 6:lcd_buffer[5] |= 0xF000;
           lcd_buffer[6] |= 0x0005;
      break;
    case 7:lcd_buffer[5] |= 0x0000;
           lcd_buffer[6] |= 0x0007;
      break;
    case 8:lcd_buffer[5] |= 0xF000;
           lcd_buffer[6] |= 0x0007;
      break; 
    case 9:lcd_buffer[5] |= 0xB000;
           lcd_buffer[6] |= 0x0007;
      break;  
    case 15:lcd_buffer[5] &= 0x0fff;   //ȫ��
            lcd_buffer[6] &= 0xfff0;   //ȫ��
      break;      
    }
    break;
}    
flood_lcd_data(); 
}

void lcd_test(void)
{
    lcd_IOInit();
    lcd_init();
    flood_lcd_data();
    lcd_clr();
    send_lcd_data(0x1e,0x11);
    Delay_ms(500);
    lcd_number(0,0,1);
    lcd_number(1,1,1);
    lcd_number(2,2,1);
    lcd_number(3,3,1);
    lcd_number(4,4,1);
    lcd_number(5,5,1);
    lcd_number(6,6,1);
    lcd_number(7,7,1);
    lcd_number(8,8,1);
    lcd_number(9,9,1);
    lcd_char(_lcd_DP1,1);
    lcd_char(_lcd_DP2,1);
    lcd_char(_lcd_DP3,1);
    lcd_char(_lcd_COL1,1);
    lcd_char(_lcd_COL2,1);
    lcd_char(_lcd_COL3,1);
    lcd_char(_lcd_W1,1);
    lcd_char(_lcd_W5,1);
    lcd_char(_lcd_W4,1);
    lcd_char(_lcd_W3,1);
    lcd_char(_lcd_W2,1);
    lcd_char(_lcd_L1,1);
    lcd_char(_lcd_L2,1);
    lcd_char(_lcd_L3,1);
    lcd_char(_lcd_L4,1);
    lcd_char(_lcd_DP5,1);
    lcd_char(_lcd_DP6,1);
    lcd_char(_lcd_DP7,1);
    lcd_char(_lcd_g,1);
    lcd_char(_lcd_kg,1);
    lcd_char(_lcd_Nm,1);
    lcd_char(_lcd_mV,1);
    lcd_char(_lcd_mm,1);
    lcd_char(_lcd_ue,1);
    lcd_char(_lcd_kpa,1);
    lcd_char(_lcd_Mpa,1);
    lcd_char(_lcd_DP8,1);
    lcd_char(_lcd_DP9,1);
    lcd_char(_lcd_0C,1);
    lcd_number(0,0,0);
    lcd_number(1,1,0);

    Delay_ms(500);
}

