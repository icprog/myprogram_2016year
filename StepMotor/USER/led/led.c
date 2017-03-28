#include "led.h"

u8 Gled_Num;
u8 Rled_Num;

//=============================================================================
//��������: LED_GPIO_Config
//���ܸ�Ҫ:LED����������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
void LED_GPIO_Config(void)
{	
	//����һ��GPIO_InitTypeDef ���͵Ľṹ�壬���ֽ�GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	//ʹ��GPIOC������ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	//ѡ��Ҫ�õ�GPIO����		
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4|GPIO_Pin_5;
	///��������ģʽΪ�������ģʽ			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	//���������ٶ�Ϊ50MHZ
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	//���ÿ⺯������ʼ��GPIO
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	GLED_OFF;
	RLED_OFF;
}

//=============================================================================
//��������:Gled_Flash
//���ܸ�Ҫ:��ɫLED��˸����
//��������:��
//��������:��
//ע��    :�˺�����Ҫ��5MS��ʱ��2�ж��е���
//=============================================================================
static void Gled_Flash(void )
{
	static u8 retry = 50; //led��˸ʱ����
	static u8 led_state=0;
	if(Gled_Num > 0){
		retry--;
		if(retry <=0){
			if(led_state){
			   GLED_ON;
			   led_state = 0;
			}else{
			   GLED_OFF;
			   Gled_Num--;
			   led_state = 1;
			}
			retry = 50;
		}
	}	
}
//=============================================================================
//��������:Rled_Flash
//���ܸ�Ҫ:��ɫLED��˸����
//��������:��
//��������:��
//ע��    :�˺�����Ҫ��5MS��ʱ��2�ж��е���
//=============================================================================
static void Rled_Flash(void )
{
	static u8 retry = 50; //led��˸ʱ����
	static u8 led_state=0;
	if(Rled_Num > 0){
		retry--;
		if(retry <=0){
			if(led_state){
			   RLED_ON;
			   led_state = 0;
			}else{
			   RLED_OFF;
			   Rled_Num--;
			   led_state = 1;
			}
			retry = 50;
		}
	}	
}

void Led_Flash(void)
{
	Gled_Flash();
	Rled_Flash();
}





