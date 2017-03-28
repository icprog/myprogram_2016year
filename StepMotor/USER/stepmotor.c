#include "stepmotor.h"
#include"HeadType.h"

Motor_Type  Step_Motor;

//=============================================================================
//��������: stepmotor_GPIO_Config
//���ܸ�Ҫ:���������������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
void stepmotor_GPIO_Config(void)
{	
	//����һ��GPIO_InitTypeDef ���͵Ľṹ�壬���ֽ�GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	//ʹ��GPIOC������ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	//ѡ��Ҫ�õ�GPIO����		
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7|GPIO_Pin_8|GPIO_Pin_9;
	///��������ģʽΪ�������ģʽ			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	//���������ٶ�Ϊ50MHZ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	//���ÿ⺯������ʼ��GPIO
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	Motor_DIR_OFF;
	Motor_Stop();
	Step_Motor.frequency = 2000;
}
//=============================================================================
//��������:Motor_Soft_Start
//���ܸ�Ҫ:�������������
//��������:startfre����������ʼƵ�ʣ�endfre������������Ƶ��
//		   second:������ÿһ��������������mode��ִ��ģʽ
//��������:��
//ע��    :�����õ�Ƶ�ʵ�������������2֮���൱����ʱ������
//		ģʽΪ0ʱ�൱��ֱ�ӿ�����������������ʱ��=second*mode
//=============================================================================
void Motor_Soft_Start(u32 startfre,u32 endfre,u8 second,u8 mode)
{	
	u32 fretemp;
	if((startfre >=	endfre)||(second <= 0)){
		mode = 0;
	}
	Step_Motor.run_mode = PULSE_RUN;
	fretemp = endfre - startfre;
	fretemp = fretemp/mode;
	Motor_Start();
	while(mode--){
		PWM_SetFre(startfre);
		Step_Motor.pules_count = (startfre)*2*second;
		while(Step_Motor.pules_count);
		startfre += fretemp;
	};
	PWM_SetFre(endfre);
	Step_Motor.run_mode = AlWAYS_RUN;
}
//=============================================================================
//��������:Motor_Soft_Stop
//���ܸ�Ҫ:���������ֹͣ
//��������:currentfre�������ǰ����Ƶ��,second����ֹͣÿһ�������õ�����,mode��ִ��ģʽ
//��������:��
//ע��    :�����õ�Ƶ�ʵ�������������2֮���൱����ʱ������
//		ģʽΪ0ʱ�൱��ֱ�ӿ���ֹͣ����ֹͣ��ʱ��=second*mode
//=============================================================================
void Motor_Soft_Stop(u32 currentfre,u8 second,u8 mode)
{
	u32 fretemp,fre;
	Step_Motor.run_mode = PULSE_RUN;
	fretemp = currentfre/mode;
	fre =  currentfre;
	while(mode--){
		PWM_SetFre(fre);
		Step_Motor.pules_count = fre*2*second;
		while(Step_Motor.pules_count);
		fre -= fretemp;
	}
	Motor_Stop();
}
//=============================================================================
//��������:Motor_Step_Pules
//���ܸ�Ҫ:����������߹̶���������
//��������:fre�����룬����Ƶ��,pules�����룬����������,mode�����룬ִ��ģʽ
//��������:��
//ע��    :	mode����0ʱʹ��������ֹͣ��ʽ������Ӧ������
//=============================================================================
void Motor_Step_Pules(u32 fre,u32 pules,u8 mode)
{
	u32 fretemp,pulestemp;
	Step_Motor.run_mode = PULSE_RUN;
	Motor_Start();
	if(mode == 1){
		fretemp = fre/2;
		pulestemp = pules/3;
		PWM_SetFre(fretemp);
		Step_Motor.pules_count = pulestemp;
		while(Step_Motor.pules_count);
		PWM_SetFre(fre);
		Step_Motor.pules_count = pules - pulestemp*2;
		while(Step_Motor.pules_count);	
		PWM_SetFre(fretemp);
		Step_Motor.pules_count = pulestemp;
		while(Step_Motor.pules_count);
	}else{
		PWM_SetFre(fre);
		Step_Motor.pules_count = pules;
		while(Step_Motor.pules_count);
	}
	Motor_Stop();		
}
