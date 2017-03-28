#include "Headtype.h"
#include"intrins.h"
//=============================================================================
//��������:Delay_500ns
//���ܸ�Ҫ:�����ʱ΢�뺯��
//��������:delay����ʱ������
//��������:��
//ע��    :��
//=============================================================================
void Delay_500ns(u16 delay)
{
       while(delay--)    //49Mhz,1Tmodule
        {
         _nop_(); _nop_(); _nop_(); _nop_(); _nop_(); _nop_(); 
         _nop_(); _nop_();
            
        }
}
//=============================================================================
//��������:Delay_ms
//���ܸ�Ҫ:�����ʱ���뺯��
//��������:delay����ʱ������
//��������:��
//ע��    :��
//=============================================================================
void Delay_ms(u16 delay)
{
    while(delay--)
      Delay_500ns(2000);
}
//=============================================================================
//��������:Motor_Speed_Control
//���ܸ�Ҫ:����ٶȿ��ƺ���
//��������:speed����������ٶ�
//��������:��
//ע��    :��
//=============================================================================
void Motor_Speed_Control(u8 speed)
{
	if(speed == 0){
		Motor_Speed(0,0,0);	
	}else if(speed == 1){
		Motor_Speed(0,0,1);
	}else if(speed == 2){
		Motor_Speed(0,1,0);
	}else if(speed == 3){
		Motor_Speed(0,1,1);
	}else if(speed == 4){
		Motor_Speed(1,0,0);
	}else if(speed == 5){
		Motor_Speed(1,0,1);
	}else if(speed == 6){
		Motor_Speed(1,1,0);
	}else if(speed == 7){
		Motor_Speed(1,1,1);
	}
}

//=============================================================================
//��������:Start_Motor1
//���ܸ�Ҫ:�������������
//��������:step������ٶ�Ҳ�ǵ������״̬����
//��������:���ִ�е���һ�����ٶ�
//ע��    :��Ҫ�ڶ�ʱ���жϺ�������
//=============================================================================
u8 Start_Motor1(u8 step)
{
	static u16 start_time = 0;
	switch(step){
	case 0x00:Motor_Speed_Control(step);step++; break;
	case 0x01:Motor_Speed_Control(step);start_time++;
						if(start_time >= START_TIMEOUT/4){step++;start_time = 0;} break;
	case 0x02:Motor_Speed_Control(step);start_time++;
						if(start_time >= START_TIMEOUT/4){step++;start_time = 0;} break;						
	case 0x03:Motor_Speed_Control(step);start_time++;
						if(start_time >= START_TIMEOUT/4){step++;start_time = 0;} break;
	case 0x04:Motor_Speed_Control(step);start_time++;
						if(start_time >= START_TIMEOUT/4){step++;start_time = 0;} break;						
	case 0x05:Motor_Speed_Control(step);start_time++;
						if(start_time >= START_TIMEOUT){step++;start_time = 0;} break;					
	case 0x06:Motor_Speed_Control(step);start_time++;
						if(start_time >= START_TIMEOUT/4){step++;start_time = 0;} break;						
	case 0x07:Motor_Speed_Control(step-1);start_time++;
						if(start_time >= START_TIMEOUT/4)
							{step++;start_time = 0;Start_Ok = 1;} break;						
	default:start_time = 0; break;
	}
	return step;
}
//=============================================================================
//��������:Stop_Motor1
//���ܸ�Ҫ:�����ֹͣ����
//��������:step������ٶ�Ҳ�ǵ������״̬����
//��������:���ִ�е���һ�����ٶ�
//ע��    :��Ҫ�ڶ�ʱ���жϺ�������
//=============================================================================
u8 Stop_Motor1(u8 step)
{
	static u16 stop_time = 0;
	switch(step){
	case 0x01:Motor_Speed_Control(step-1);step--;stop_time = 0;
						LED0 = 1;Control_Power = POWER_OFF;break;
	case 0x02:Motor_Speed_Control(step-1);stop_time++;
						if(stop_time >= STOP_TIMEOUT/4){step--;stop_time = 0;} break;	
	case 0x03:Motor_Speed_Control(step-1);stop_time++;
						if(stop_time >= STOP_TIMEOUT/4){step--;stop_time = 0;} break;	
	case 0x04:Motor_Speed_Control(step-1);stop_time++;
						if(stop_time >= STOP_TIMEOUT/2){step--;stop_time = 0;} break;	
	case 0x05:Motor_Speed_Control(step-1);stop_time++;
						if(stop_time >= STOP_TIMEOUT/2){step--;stop_time = 0;} break;	
	case 0x06:Motor_Speed_Control(step-1);stop_time++;
						if(stop_time >= STOP_TIMEOUT/2){step--;stop_time = 0;} break;	
	case 0x07:Motor_Speed_Control(step-1);stop_time++;
						if(stop_time >= STOP_TIMEOUT/2){step--;stop_time = 0;} break;	
	case 0x08:Motor_Speed_Control(step-2);stop_time++;
						if(stop_time >= STOP_TIMEOUT/2){step--;stop_time = 0;} break;	
	default:Motor_Speed_Control(0);stop_time = 0;Control_Power = POWER_OFF; break;
	}
		return step;
}