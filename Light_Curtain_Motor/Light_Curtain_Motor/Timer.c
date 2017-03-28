#include "Headtype.h"
#include"intrins.h"

//#define STOP_DELAY	200*4		//200*5ms*9=9s,��ʱ���ֻ��Ҫ���������
//=============================================================================
//��������:Timer0Init
//���ܸ�Ҫ:��ʱ��0��ʼ������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
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
//=============================================================================
//��������:timer0
//���ܸ�Ҫ:��ʱ��0�жϷ�����
//��������:��
//��������:��
//ע��    :��
//=============================================================================
void timer0() interrupt  1 
{
	static u16 stop_delay_time;
	TL0 = TimerLow;		//���ö�ʱ��ֵ
	TH0 = TimerHigh;		//���ö�ʱ��ֵ
	if(Start_Signal ==1){
		Speed_Step = Start_Motor1(Speed_Step);
	}
	if(Stop_Signal == 1){
		Speed_Step = Stop_Motor1(Speed_Step);
	}
	if(Stop_Delay == 1){
		stop_delay_time++;
		if(stop_delay_time >= STOP_DELAY){
			Stop_Ok = 1;
			Stop_Delay = 0;
			stop_delay_time = 0;
		}
	}
}

