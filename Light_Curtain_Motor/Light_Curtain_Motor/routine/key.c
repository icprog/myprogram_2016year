#include"key.h"
#include"HT1621B.H" 
u16 xdata Key1TimerCount=0,Key2TimerCount=0,Key3TimerCount=0,Key4TimerCount=0;
bit Key1TriggerFlag,Key2TriggerFlag,Key3TriggerFlag,Key4TriggerFlag,KeyTriggerOK;
u8 KeyNum;

void Timer0Init(void)		//5����@12.000MHz
{
//	AUXR &= 0x7F;		//��ʱ��ʱ��12Tģʽ
	TMOD &= 0xF0;		//���ö�ʱ��ģʽ
	TMOD |= 0x01;		//���ö�ʱ��ģʽ
    CKCON &=0XF8;       //���ö�ʱ��ʱ��ѡ��
    CKCON |=0X02;       //���ö�ʱ��ʱ��system/48=1.02MHz
	TL0 = TimerLow;		//���ö�ʱ��ֵ
	TH0 = TimerHigh;		//���ö�ʱ��ֵ
	TF0 = 0;		//���TF0��־
	TR0 = 1;		//��ʱ��0��ʼ��ʱ
    ET0=1;
    EA=1;
}
/*****************************************************
������ʼ������
******************************************************/
void KeyInit()
{      
    P1MDIN|=0X3D;
    P1MDOUT&=0xD3;  
    P1SKIP&=0xD3;
    Key1=1;
    Key2=1;
    Key3=1;
    Key4=1;
    Key1TimerCount=0; 
    Key2TimerCount=0; 
    Key3TimerCount=0; 
    Key4TimerCount=0; 
    KeyTriggerOK=0;
    Timer0Init();
}
/*****************************************************
����ɨ�裬����ֵ����KeyNum���а�������ʱKeyTriggerOK=1;
���봦���˰�������ſ��Ը�λKeyNum��KeyTriggerOK���ĸ�
������������ֻ����������ϴ˳���KeyNum��2*4*7=56����ϣ�
******************************************************/
void Keyscan()
{
static u8 xdata KeyNumTemp;
   if(Key1==0||Key2==0||Key3==0||Key4==0) 
   {
       if(Key1==0){
              Key1TriggerFlag=1;
              KeyNumTemp|=KeyUp;
       }
       else{
              if(Key1TimerCount<=KeyShort){  
                   KeyNumTemp&=~KeyUp;
              }
             else if((KeyShort<Key1TimerCount)&&(Key1TimerCount<KeyLong)){
                   KeyNumTemp|=KeyUp;
              }
             else{
                   KeyNumTemp&=~KeyUp;
                   KeyNumTemp|=KeyUpLong;
             }
           Key1TimerCount=0;
           Key1TriggerFlag=0;
       }         
      if(Key2==0){
             Key2TriggerFlag=1;
             KeyNumTemp|=KeyDown;
       }
       else{
              if(Key2TimerCount<=KeyShort){  
                   KeyNumTemp&=~KeyDown;
              }
             else if((KeyShort<Key2TimerCount)&&(Key2TimerCount<KeyLong)){
                   KeyNumTemp|=KeyDown;
              }
             else{
               KeyNumTemp&=~KeyDown;
               KeyNumTemp|=KeyDownLong;
             }
            Key2TimerCount=0;
            Key2TriggerFlag=0;
       }
       if(Key3==0){
             Key3TriggerFlag=1;
             KeyNumTemp|=KeyEnter;
       }
       else{
              if(Key3TimerCount<=KeyShort){  
                   KeyNumTemp&=~KeyEnter;
              }
             else if((KeyShort<Key3TimerCount)&&(Key3TimerCount<KeyLong)){
                   KeyNumTemp|=KeyEnter;
              }
             else{
               KeyNumTemp&=~KeyEnter;
               KeyNumTemp|=KeyEnterLong;
             }
             Key3TimerCount=0;
             Key3TriggerFlag=0;
       }
       if(Key4==0){
             Key4TriggerFlag=1;
             KeyNumTemp|=KeyBack;
       }
       else{
              if(Key4TimerCount<=KeyShort){  
                   KeyNumTemp&=~KeyBack;
              }
             else if((KeyShort<Key4TimerCount)&&(Key4TimerCount<KeyLong)){
                   KeyNumTemp|=KeyBack;
              }
             else{
               KeyNumTemp&=~KeyBack;
               KeyNumTemp|=KeyBackLong;
             }
           Key4TimerCount=0;
           Key4TriggerFlag=0;
       }
   }
   else{
     KeyNum=KeyNumTemp;
     KeyNumTemp=0; 
     if(KeyNum!=0)
        KeyTriggerOK=1;
    }
}
void timer0() interrupt  1 
{
	TL0 = TimerLow;		//���ö�ʱ��ֵ
	TH0 = TimerHigh;		//���ö�ʱ��ֵ
    Foold_Lcd_TimeCount++;
    Keyscan();
    if(Key1TriggerFlag)
        Key1TimerCount++;
    if(Key2TriggerFlag)
        Key2TimerCount++;
    if(Key3TriggerFlag)
        Key3TimerCount++;
    if(Key4TriggerFlag)
        Key4TimerCount++;
}