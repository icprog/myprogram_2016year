#include"HeadType.h"	
extern u8 Send_Medicine_Finish_State;
//=============================================================================
//��������:Send_Medicine1_Config
//���ܸ�Ҫ:��ҩ��1�����������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void Send_Medicine1_Config(void)
{
		//����һ��GPIO_InitTypeDef ���͵Ľṹ�壬���ֽ�GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//�������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE1_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE1_MOTOR_PORT, &GPIO_InitStructure);
	//�ƿ���IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE1_LIGHT_IO;			 
	GPIO_Init(DEVICE1_LIGHT_PORT, &GPIO_InitStructure);
	//������1����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE1_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE1_SENSOR1_PORT, &GPIO_InitStructure);
	//������2����IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE1_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE1_SENSOR2_PORT, &GPIO_InitStructure);
	//������3����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE1_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE1_SENSOR3_PORT, &GPIO_InitStructure);
	//��������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE1_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE1_KEY_PORT, &GPIO_InitStructure);
	
}
//=============================================================================
//��������:Send_Medicine2_Config
//���ܸ�Ҫ:��ҩ��2�����������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void Send_Medicine2_Config(void )
{
		//����һ��GPIO_InitTypeDef ���͵Ľṹ�壬���ֽ�GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//�������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE2_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE2_MOTOR_PORT, &GPIO_InitStructure);
	//�ƿ���IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE2_LIGHT_IO;			 
	GPIO_Init(DEVICE2_LIGHT_PORT, &GPIO_InitStructure);
	//������1����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE2_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE2_SENSOR1_PORT, &GPIO_InitStructure);
	//������2����IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE2_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE2_SENSOR2_PORT, &GPIO_InitStructure);
	//������3����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE2_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE2_SENSOR3_PORT, &GPIO_InitStructure);
	//��������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE2_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE2_KEY_PORT, &GPIO_InitStructure);
}

//=============================================================================
//��������:Send_Medicine3_Config
//���ܸ�Ҫ:��ҩ��3�����������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void Send_Medicine3_Config(void)
{
		//����һ��GPIO_InitTypeDef ���͵Ľṹ�壬���ֽ�GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//�������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE3_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE3_MOTOR_PORT, &GPIO_InitStructure);
	//�ƿ���IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE3_LIGHT_IO;			 
	GPIO_Init(DEVICE3_LIGHT_PORT, &GPIO_InitStructure);
	//������1����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE3_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE3_SENSOR1_PORT, &GPIO_InitStructure);
	//������2����IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE3_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE3_SENSOR2_PORT, &GPIO_InitStructure);
	//������3����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE3_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE3_SENSOR3_PORT, &GPIO_InitStructure);
	//��������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE3_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE3_KEY_PORT, &GPIO_InitStructure);
}
//=============================================================================
//��������:Send_Medicine4_Config
//���ܸ�Ҫ:��ҩ��4�����������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void Send_Medicine4_Config(void)
{
		//����һ��GPIO_InitTypeDef ���͵Ľṹ�壬���ֽ�GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//�������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE4_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE4_MOTOR_PORT, &GPIO_InitStructure);
	//�ƿ���IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE4_LIGHT_IO;			 
	GPIO_Init(DEVICE4_LIGHT_PORT, &GPIO_InitStructure);
	//������1����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR1_PORT, &GPIO_InitStructure);
	//������2����IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE4_SENSOR2_PORT, &GPIO_InitStructure);
	//������3����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR3_PORT, &GPIO_InitStructure);
	//��������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE4_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE4_KEY_PORT, &GPIO_InitStructure);
}
#if CHANNEL_4 == 0
//=============================================================================
//��������:Send_Medicine4_Config
//���ܸ�Ҫ:��ҩ��4�����������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void Send_Medicine5_Config(void)
{
		//����һ��GPIO_InitTypeDef ���͵Ľṹ�壬���ֽ�GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//�������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE5_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE5_MOTOR_PORT, &GPIO_InitStructure);
	//�ƿ���IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE5_LIGHT_IO;			 
	GPIO_Init(DEVICE5_LIGHT_PORT, &GPIO_InitStructure);
	//������1����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR1_PORT, &GPIO_InitStructure);
	//������2����IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE5_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE5_SENSOR2_PORT, &GPIO_InitStructure);
	//������3����IO��
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR3_PORT, &GPIO_InitStructure);
	//��������IO��
	GPIO_InitStructure.GPIO_Pin = DEVICE5_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE5_KEY_PORT, &GPIO_InitStructure);
}


#endif
//=============================================================================
//��������:CH_Param_Init
//���ܸ�Ҫ:ÿ��ͨ����ز����ĳ�ʼ��
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void CH_Param_Init(void)
{
	Channel.ch1.state = RESERVE;
	Channel.ch2.state = RESERVE;
	Channel.ch3.state = RESERVE;
	Channel.ch4.state = RESERVE;
	Channel.ch5.state = RESERVE;
}
//=============================================================================
//��������:Param_Init
//���ܸ�Ҫ:��ʼ�������Ͳ���
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void Param_Init(void)
{
	MCU_State = SLAVE;
	PC_Answer.Nanswer_timeout = NANSWER_TIME;
	PC_Answer.answer_numout = NANSWER_NUMOUT;
	PC_Answer.answer_state =0;	
	Usart1_Control_Data.rx_aframe = 0;
	Channel.ch1.motor_state = 0;
	Channel.ch2.motor_state = 0;
	Channel.ch3.motor_state = 0;
	Channel.ch4.motor_state = 0;
	Channel.ch1.timeoutstart = 0;
	Channel.ch2.timeoutstart = 0;
	Channel.ch3.timeoutstart = 0;
	Channel.ch4.timeoutstart = 0;
	Channel.ch1.timeout = 0;
	Channel.ch2.timeout = 0;
	Channel.ch3.timeout = 0;
	Channel.ch4.timeout = 0;
	CH_Param_Init();
}

//=============================================================================
//��������:Send_Medicine_Config
//���ܸ�Ҫ:��ʼ������ͨ��
//��������:��
//��������:��
//ע��    :��
//=============================================================================
void Send_Medicine_Config(void)
{
	Send_Medicine1_Config();
	Send_Medicine2_Config();
	Send_Medicine3_Config();
	Send_Medicine4_Config();
#if CHANNEL_4 == 0
	Send_Medicine5_Config();
#endif
	Param_Init();
}
//=============================================================================
//��������:CH1_Send_Medicine
//���ܸ�Ҫ:ͨ��1״̬������ҩ
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void CH1_Send_Medicine(void)
{
	static u8 temp;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch1.state){
	case RESERVE:	Channel.ch1.motor_pulse = 0;
								Channel.ch1.send_actual = 0;
								if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿��в��ҷ�ҩ����ҩʱ���Ը�λ
									delay_ms(2);
									if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){
										DEVICE1_MOTOR_RUN;
										Channel.ch1.motor_state = 1;	
										Channel.ch1.err_flag = 0;										
									}
								}
								break;
	case READY:	 if((Channel.ch2.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch4.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch1.send_num >0)&&(Channel.ch1.motor_state == 0 )&&(Channel.ch1.err_flag == 0)){									
										if(READ_DEVICE1_SENSOR2 == READLOW){//��ҩ������ҩ���������
											delay_ms(1);
											if(READ_DEVICE1_SENSOR2 == READLOW){
													Channel.ch1.motor_pulse = 0;
													Channel.ch1.send_actual = 0;
													Channel.ch1.state = WORKING;
												  Channel.ch1.send_jam_time = SEND_MEDICINE_JAMTIME ;
													DEVICE1_MOTOR_RUN;
												  BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch1.motor_state = 1;
													Channel.ch1.motor_start_state = 1;//����˲��ֻ����һ�����������������ͨ������ͬʱ����
											}else{Channel.ch1.state = WORKEND;}
										}else{	//��ҩ����û��ҩ������
											Channel.ch1.state = WORKEND;
										}									
								}else{
									Channel.ch1.state = WORKEND; 
								}
						  	}
								break ;	
	case WORKING: 
							#if VERSIONS
								if((Channel.ch1.send_num<= Channel.ch1.send_actual)&&(Channel.ch1.timeoutstart ==0)){
									Channel.ch1.timeoutstart = 1;
									Channel.ch1.timeout = 0;
								}
							#endif
							  if((READ_DEVICE1_SENSOR2 == READHIGH)&&(Channel.ch1.timeoutstart ==0)){//����������û��ҩ��
									delay_ms(2);
									if((READ_DEVICE1_SENSOR2 == READHIGH)&&(Channel.ch1.timeoutstart ==0)){//����������û��ҩ��
										temp++;
										delay_ms(2);
										if(temp == 20){
											temp = 0;		
								#if VERSIONS
											Channel.ch1.timeoutstart = 1;
											Channel.ch1.timeout = 0;
								#else
											Channel.ch1.timeoutstart = 1;
											Channel.ch1.timeout = SEND_MEDICINE_TIMEOUT/4;
								#endif
										}
									 }else{
										temp = 0;	
									}
							  }
							if((Channel.ch1.send_num <= Channel.ch1.motor_pulse)||(SEND_MEDICINE_TIMEOUT <= Channel.ch1.timeout)\
                ||(Channel.ch1.send_jam_time ==0)){ //���ת������ô��Ȧ����Ӧ�÷���ô��ҩ
// 									Channel.ch1.state = WORKEND;
									Channel.ch1.timeoutstart = 0;
									Channel.ch1.timeout = 0;
								#if VERSIONS
								  if(Channel.ch1.motor_state == 0){
								//	DEVICE1_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
                    Channel.ch1.timeoutstart = 1; //�ظ�����timeout
										Channel.ch1.timeout = 0;
										Channel.ch1.state = WORKEND;
									}
								#else
										DEVICE1_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch1.motor_state = 0;
										Channel.ch1.state = WORKEND;
									  if(Channel.ch1.send_num != Channel.ch1.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch1.motor_state == 0){ //���ֹͣ���ټ���״̬
									if(Channel.ch1.send_num >0){
										if(Channel.ch1.motor_pulse > 0){//���ת���ˣ�
											#if VERSIONS
												if(Channel.ch1.send_actual == Channel.ch1.send_num){//ʵ�ʷ�ҩ��������ҩ
													MCU_Host_Send.control.ch1_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch1_num = Channel.ch1.send_actual;
												}else{
													MCU_Host_Send.control.ch1_state = 2;
													MCU_Host_Send.control.ch1_num = Channel.ch1.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch1_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch1_num = Channel.ch1.motor_pulse;
												}else{//��ҩ����ҩ��������ҩ��������ϴ�������Ϣ����λ��
													MCU_Host_Send.control.ch1_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch1_num = 0xFF;
													Channel.ch1.err_flag = 1;
												}
											#endif
												Channel.ch1.motor_state = 0;
												DEVICE1_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}else{//���û��ת������е����
													MCU_Host_Send.control.ch1_state = 0XFF;
													if(Channel.ch1.send_num >0){//��λ������
														MCU_Host_Send.control.ch1_num =  0;
													}else{//��λ������
														MCU_Host_Send.control.ch1_num =0xFF;
													}
													Channel.ch1.err_flag = 1;
													Channel.ch1.motor_state = 0;
													DEVICE1_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}
									}else{
											MCU_Host_Send.control.ch1_state = 2;							//����״̬��PC
											MCU_Host_Send.control.ch1_num =  0;
									}
										no_medicine_flag = 0;
										Channel.ch1.state = END;
							}else{
                    #if VERSIONS    //�м�����⿪��ʱ����������������⿪�ػ�һֱ��ҩ�����
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch1.timeout){
                      DEVICE1_MOTOR_STOP;
                      Channel.ch1.timeoutstart = 0; //�ظ�����timeout
                      Channel.ch1.timeout = 0;
                    }
                    #endif
              }
								break ;	
	case END:	if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿���ʱ���Ը�λ
										delay_ms(1);
										if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){
											DEVICE1_MOTOR_RUN;	
											Channel.ch1.motor_state = 1;
										}
							}
								break;	//���й��̽������ȴ�����ͨ����ɹ���
	default :
								break;	
	}	
}


//=============================================================================
//��������:CH2_Send_Medicine
//���ܸ�Ҫ:ͨ��2״̬������ҩ
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void CH2_Send_Medicine(void)
{
	static u8 temp;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch2.state){
	case RESERVE:	Channel.ch2.motor_pulse = 0;
								Channel.ch2.send_actual = 0;
								if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿��в��ҷ�ҩ����ҩʱ���Ը�λ
									delay_ms(2);
									if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){
										DEVICE2_MOTOR_RUN;
										Channel.ch2.motor_state = 1;
                    Channel.ch2.err_flag = 0;										
									}
								}
								break;
	case READY:	if((Channel.ch1.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch4.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch2.send_num >0)&&(Channel.ch2.motor_state == 0 )&&(Channel.ch2.err_flag == 0)){									
										if(READ_DEVICE2_SENSOR2 == READLOW){//��ҩ������ҩ���������
											delay_ms(1);
											if(READ_DEVICE2_SENSOR2 == READLOW){
													Channel.ch2.motor_pulse = 0;
													Channel.ch2.send_actual = 0;
													Channel.ch2.state = WORKING;
												  Channel.ch2.send_jam_time = SEND_MEDICINE_JAMTIME ;
													DEVICE2_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch2.motor_state = 1;
													Channel.ch2.motor_start_state = 1;												
											}else{Channel.ch2.state = WORKEND;}
										}else{	//��ҩ����û��ҩ������
											Channel.ch2.state = WORKEND;
										}									
								}else{
									Channel.ch2.state = WORKEND; 
								}
							}
								break ;	
	case WORKING: 
							#if VERSIONS
							if((Channel.ch2.send_num<= Channel.ch2.send_actual)&&(Channel.ch2.timeoutstart ==0)){
									Channel.ch2.timeoutstart = 1;
									Channel.ch2.timeout = 0;
								}
							#endif
							 if((READ_DEVICE2_SENSOR2 == READHIGH)&&(Channel.ch2.timeoutstart ==0)){//����������û��ҩ��
									delay_ms(2);
									if((READ_DEVICE2_SENSOR2 == READHIGH)&&(Channel.ch2.timeoutstart ==0)){//����������û��ҩ��
										temp++;
										delay_ms(2);
										if(temp == 20){
											temp = 0;		
								#if VERSIONS
											Channel.ch2.timeoutstart = 1;
											Channel.ch2.timeout = 0;
								#else
											Channel.ch2.timeoutstart = 1;
											Channel.ch2.timeout = SEND_MEDICINE_TIMEOUT/4;
								#endif
										}
									 }else{
										temp = 0;	
									}
							  }
							if((Channel.ch2.send_num <= Channel.ch2.motor_pulse)||(SEND_MEDICINE_TIMEOUT <= Channel.ch2.timeout)||\
                (Channel.ch2.send_jam_time ==0)){ //���ת������ô��Ȧ����Ӧ�÷���ô��ҩ
// 									Channel.ch2.state = WORKEND;
									Channel.ch2.timeoutstart = 0;
									Channel.ch2.timeout = 0;
								#if VERSIONS
								  if(Channel.ch2.motor_state == 0){
								//	DEVICE2_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch2.state = WORKEND;
									}
								#else
										DEVICE2_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch2.motor_state = 0;
										Channel.ch2.state = WORKEND;
									  if(Channel.ch2.send_num != Channel.ch2.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch2.motor_state == 0){ //���ֹͣ���ټ���״̬
									if(Channel.ch2.send_num >0){
										if(Channel.ch2.motor_pulse > 0){//���ת���ˣ�
											#if VERSIONS
												if(Channel.ch2.send_actual == Channel.ch2.send_num){//ʵ�ʷ�ҩ��������ҩ
													MCU_Host_Send.control.ch2_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch2_num = Channel.ch2.send_actual;
												}else{
													MCU_Host_Send.control.ch2_state = 2;
													MCU_Host_Send.control.ch2_num = Channel.ch2.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch2_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch2_num = Channel.ch2.motor_pulse;
												}else{//��ҩ����ҩ��������ҩ��������ϴ�������Ϣ����λ��
													MCU_Host_Send.control.ch2_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch2_num = 0xFF;
													Channel.ch2.err_flag = 1;
												}
											#endif
												Channel.ch2.motor_state = 0;
												DEVICE2_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}else{//���û��ת������е����
													MCU_Host_Send.control.ch2_state = 0XFF;
													if(Channel.ch2.send_num >0){//��λ������
														MCU_Host_Send.control.ch2_num =  0;
													}else{//��λ������
														MCU_Host_Send.control.ch2_num =0xFF;
													}
													Channel.ch2.err_flag = 1;
													Channel.ch2.motor_state = 0;
													DEVICE2_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}
									}else{
											MCU_Host_Send.control.ch2_state = 2;							//����״̬��PC
											MCU_Host_Send.control.ch2_num =  0;
									}
										no_medicine_flag = 0;
										Channel.ch2.state = END;
							}else{
                    #if VERSIONS    //�м�����⿪��ʱ����������������⿪�ػ�һֱ��ҩ�����
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch2.timeout){
                      DEVICE2_MOTOR_STOP;
                      Channel.ch2.timeoutstart = 0; //�ظ�����timeout
                      Channel.ch2.timeout = 0;
                    }
                    #endif
              }
								break ;	
	case END: if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿���ʱ���Ը�λ
										delay_ms(1);
										if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){
											DEVICE2_MOTOR_RUN;	
											Channel.ch2.motor_state = 1;
										}
								}
							 break ;
	default :
								break;	
	}	
}

//=============================================================================
//��������:CH3_Send_Medicine
//���ܸ�Ҫ:ͨ��3״̬������ҩ
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void CH3_Send_Medicine(void)
{
	static u8 temp;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch3.state){
	case RESERVE:	Channel.ch3.motor_pulse = 0;
								Channel.ch3.send_actual = 0;
								if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿��в��ҷ�ҩ����ҩʱ���Ը�λ
									delay_ms(2);
									if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){
										DEVICE3_MOTOR_RUN;
										Channel.ch3.motor_state = 1;
										Channel.ch3.err_flag = 0;										
									}
								}
								break;
	case READY:	if((Channel.ch2.motor_start_state != 1)&&(Channel.ch1.motor_start_state != 1)&&\
                  (Channel.ch4.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch3.send_num >0)&&(Channel.ch3.motor_state == 0 )&&(Channel.ch3.err_flag == 0)){									
										if(READ_DEVICE3_SENSOR2 == READLOW){//��ҩ������ҩ���������
											delay_ms(1);
											if(READ_DEVICE3_SENSOR2 == READLOW){
													Channel.ch3.motor_pulse = 0;
													Channel.ch3.send_actual = 0;
													Channel.ch3.state = WORKING;
												  Channel.ch3.send_jam_time = SEND_MEDICINE_JAMTIME ;
													DEVICE3_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch3.motor_state = 1;
													Channel.ch3.motor_start_state = 1;
											}else{Channel.ch3.state = WORKEND;}
										}else{	//��ҩ����û��ҩ������
											Channel.ch3.state = WORKEND;
										}									
								}else{
									Channel.ch3.state = WORKEND; 
								}
							}
								break ;	
	case WORKING: 
							#if VERSIONS
							 if((Channel.ch3.send_num<= Channel.ch3.send_actual)&&(Channel.ch3.timeoutstart ==0)){
									Channel.ch3.timeoutstart = 1;
									Channel.ch3.timeout = 0;
								}
							#endif
							  if((READ_DEVICE3_SENSOR2 == READHIGH)&&(Channel.ch3.timeoutstart ==0)){//����������û��ҩ��
									delay_ms(2);
									if((READ_DEVICE3_SENSOR2 == READHIGH)&&(Channel.ch3.timeoutstart ==0)){//����������û��ҩ��
										temp++;
										delay_ms(2);
										if(temp == 20){
											temp = 0;		
								#if VERSIONS
											Channel.ch3.timeoutstart = 1;
											Channel.ch3.timeout = 0;
								#else
											Channel.ch3.timeoutstart = 1;
											Channel.ch3.timeout = SEND_MEDICINE_TIMEOUT/4;
								#endif
										}
									 }else{
										temp = 0;	
									}
							  }
							if((Channel.ch3.send_num <= Channel.ch3.motor_pulse)||(SEND_MEDICINE_TIMEOUT <= Channel.ch3.timeout)||\
                (Channel.ch3.send_jam_time ==0)){ //���ת������ô��Ȧ����Ӧ�÷���ô��ҩ
// 									Channel.ch3.state = WORKEND;
									Channel.ch3.timeoutstart = 0;
									Channel.ch3.timeout = 0;
								#if VERSIONS
								  if(Channel.ch3.motor_state == 0){
								//	DEVICE3_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch3.state = WORKEND;
									}
								#else
										DEVICE3_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch3.motor_state = 0;
										Channel.ch3.state = WORKEND;
									  if(Channel.ch3.send_num != Channel.ch3.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch3.motor_state == 0){ //���ֹͣ���ټ���״̬	
									if(Channel.ch3.send_num >0){
										if(Channel.ch3.motor_pulse > 0){//���ת���ˣ�
											#if VERSIONS
												if(Channel.ch3.send_actual == Channel.ch3.send_num){//ʵ�ʷ�ҩ��������ҩ
													MCU_Host_Send.control.ch3_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch3_num = Channel.ch3.send_actual;
												}else{
													MCU_Host_Send.control.ch3_state = 2;
													MCU_Host_Send.control.ch3_num = Channel.ch3.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch3_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch3_num = Channel.ch3.motor_pulse;
												}else{//��ҩ����ҩ��������ҩ��������ϴ�������Ϣ����λ��
													MCU_Host_Send.control.ch3_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch3_num = 0xFF;
													Channel.ch3.err_flag = 1;
												}
											#endif
												Channel.ch3.motor_state = 0;
												DEVICE3_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}else{//���û��ת������е����
													MCU_Host_Send.control.ch3_state = 0XFF;
													if(Channel.ch3.send_num >0){//��λ������
														MCU_Host_Send.control.ch3_num =  0;
													}else{//��λ������
														MCU_Host_Send.control.ch3_num =0xFF;
													}
													Channel.ch3.err_flag = 1;
													Channel.ch3.motor_state = 0;
													DEVICE3_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}
									}else{
											MCU_Host_Send.control.ch3_state = 2;							//����״̬��PC
											MCU_Host_Send.control.ch3_num =  0;
									}
									  no_medicine_flag = 0;
										Channel.ch3.state = END;
							}else{
                    #if VERSIONS    //�м�����⿪��ʱ����������������⿪�ػ�һֱ��ҩ�����
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch3.timeout){
                      DEVICE3_MOTOR_STOP;
                      Channel.ch3.timeoutstart = 0; //�ظ�����timeout
                      Channel.ch3.timeout = 0;
                    }
                    #endif
              }
								break ;	
	case END:	if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿���ʱ���Ը�λ
										delay_ms(1);
										if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){
											DEVICE3_MOTOR_RUN;	
											Channel.ch3.motor_state = 1;
										}
								}
								break ;
	default :
								break;	
	}	
}

//=============================================================================
//��������:CH4_Send_Medicine
//���ܸ�Ҫ:ͨ��4״̬������ҩ
//��������:��
//��������:��
//ע��    :��
//=============================================================================
static void CH4_Send_Medicine(void)
{
	static u8 temp;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch4.state){
	case RESERVE:	Channel.ch4.motor_pulse = 0;
								Channel.ch4.send_actual = 0;
								if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿��в��ҷ�ҩ����ҩʱ���Ը�λ
									delay_ms(2);
									if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){
										DEVICE4_MOTOR_RUN;
										Channel.ch4.motor_state = 1;
										Channel.ch4.err_flag = 0;
									}
								}
								break;
	case READY:	if((Channel.ch2.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch1.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch4.send_num >0)&&(Channel.ch4.motor_state == 0 )&&(Channel.ch4.err_flag == 0)){									
										if(READ_DEVICE4_SENSOR2 == READLOW){//��ҩ������ҩ���������
											delay_ms(1);
											if(READ_DEVICE4_SENSOR2 == READLOW){
													Channel.ch4.motor_pulse = 0;
													Channel.ch4.send_actual = 0;
													Channel.ch4.state = WORKING;
												  Channel.ch4.send_jam_time = SEND_MEDICINE_JAMTIME ;
													DEVICE4_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch4.motor_state = 1;
													Channel.ch4.motor_start_state = 1;
											}else{Channel.ch4.state = WORKEND;}
										}else{	//��ҩ����û��ҩ������
											Channel.ch4.state = WORKEND;
										}									
								}else{
									Channel.ch4.state = WORKEND; 
								}
							}
								break ;	
	case WORKING: 
							#if VERSIONS
								if((Channel.ch4.send_num<= Channel.ch4.send_actual)&&(Channel.ch4.timeoutstart ==0)){
									Channel.ch4.timeoutstart = 1;
									Channel.ch4.timeout = 0;
								}
							#endif
							  if((READ_DEVICE4_SENSOR2 == READHIGH)&&(Channel.ch4.timeoutstart ==0)){//����������û��ҩ��
									 delay_ms(2);
									if((READ_DEVICE4_SENSOR2 == READHIGH)&&(Channel.ch4.timeoutstart ==0)){//����������û��ҩ��
										temp++;
										delay_ms(2);
										if(temp == 20){
											temp = 0;		
								#if VERSIONS
											Channel.ch4.timeoutstart = 1;
											Channel.ch4.timeout = 0;
								#else
											Channel.ch4.timeoutstart = 1;
											Channel.ch4.timeout = SEND_MEDICINE_TIMEOUT/4;
								#endif
										}
									 }else{
										temp = 0;	
									}
							  }
							if((Channel.ch4.send_num <= Channel.ch4.motor_pulse)||(SEND_MEDICINE_TIMEOUT <= Channel.ch4.timeout)||\
                  (Channel.ch4.send_jam_time ==0)){ //���ת������ô��Ȧ����Ӧ�÷���ô��ҩ
// 									Channel.ch4.state = WORKEND;
									Channel.ch4.timeoutstart = 0;
									Channel.ch4.timeout = 0;
								#if VERSIONS
								  if(Channel.ch4.motor_state == 0){
								//	DEVICE4_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch4.state = WORKEND;
									}
								#else
										DEVICE4_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch4.motor_state = 0;
										Channel.ch4.state = WORKEND;
									  if(Channel.ch4.send_num != Channel.ch4.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch4.motor_state == 0){ //���ֹͣ���ټ���״̬	
									if(Channel.ch4.send_num >0){
										if(Channel.ch4.motor_pulse > 0){//���ת���ˣ�
											#if VERSIONS
												if(Channel.ch4.send_actual == Channel.ch4.send_num){//ʵ�ʷ�ҩ��������ҩ
													MCU_Host_Send.control.ch4_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch4_num = Channel.ch4.send_actual;
												}else{
													MCU_Host_Send.control.ch4_state = 2;
													MCU_Host_Send.control.ch4_num = Channel.ch4.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch4_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch4_num = Channel.ch4.motor_pulse;
												}else{//��ҩ����ҩ��������ҩ��������ϴ�������Ϣ����λ��
													MCU_Host_Send.control.ch4_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch4_num = 0xFF;
													Channel.ch4.err_flag = 1;
												}
											#endif
												Channel.ch4.motor_state = 0;
												DEVICE4_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}else{//���û��ת������е����
													MCU_Host_Send.control.ch4_state = 0XFF;
													if(Channel.ch4.send_num >0){//��λ������
														MCU_Host_Send.control.ch4_num =  0;
													}else{//��λ������
														MCU_Host_Send.control.ch4_num =0xFF;
													}
													Channel.ch4.err_flag = 1;
													Channel.ch4.motor_state = 0;
													DEVICE4_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}
									}else{
											MCU_Host_Send.control.ch4_state = 2;							//����״̬��PC
											MCU_Host_Send.control.ch4_num =  0;
									}
									  no_medicine_flag = 0;
										Channel.ch4.state = END;
							}else{
                    #if VERSIONS    //�м�����⿪��ʱ����������������⿪�ػ�һֱ��ҩ�����
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch4.timeout){
                      DEVICE4_MOTOR_STOP;
                      Channel.ch4.timeoutstart = 0; //�ظ�����timeout
                      Channel.ch4.timeout = 0;
                    }
                    #endif
              }
								break ;
	case END:	if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿���ʱ���Ը�λ
										delay_ms(1);
										if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){
											DEVICE4_MOTOR_RUN;	
											Channel.ch4.motor_state = 1;
										}
								}
							break;
	default :
								break;	
	}	
}
//=============================================================================
//��������:CH5_Send_Medicine
//���ܸ�Ҫ:ͨ��5״̬������ҩ
//��������:��
//��������:��
//ע��    :��
//=============================================================================
#if CHANNEL_4 == 0
static void CH5_Send_Medicine(void)
{
	static u8 temp;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch5.state){
	case RESERVE:	Channel.ch5.motor_pulse = 0;
								Channel.ch5.send_actual = 0;
								if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿��в��ҷ�ҩ����ҩʱ���Ը�λ
									delay_ms(2);
									if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){
										DEVICE5_MOTOR_RUN;
										Channel.ch5.motor_state = 1;
										Channel.ch5.err_flag = 0;
									}
								}
								break;
	case READY:	if((Channel.ch2.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch1.motor_start_state != 1)&&(Channel.ch4.motor_start_state != 1)){
									if((Channel.ch5.send_num >0)&&(Channel.ch5.motor_state == 0 )&&(Channel.ch5.err_flag == 0)){									
										if(READ_DEVICE5_SENSOR2 == READLOW){//��ҩ������ҩ���������
											delay_ms(1);
											if(READ_DEVICE5_SENSOR2 == READLOW){
													Channel.ch5.motor_pulse = 0;
													Channel.ch5.send_actual = 0;
													Channel.ch5.state = WORKING;
												  Channel.ch5.send_jam_time = SEND_MEDICINE_JAMTIME ;
													DEVICE5_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch5.motor_state = 1;
													Channel.ch5.motor_start_state = 1;
											}else{Channel.ch5.state = WORKEND;}
										}else{	//��ҩ����û��ҩ������
											Channel.ch5.state = WORKEND;
										}									
								}else{
									Channel.ch5.state = WORKEND; 
								}
							}
								break ;	
	case WORKING: 
							#if VERSIONS
								if((Channel.ch5.send_num<= Channel.ch5.send_actual)&&(Channel.ch5.timeoutstart ==0)){
									Channel.ch5.timeoutstart = 1;
									Channel.ch5.timeout = 0;
								}
							#endif
							  if((READ_DEVICE5_SENSOR2 == READHIGH)&&(Channel.ch5.timeoutstart ==0)){//����������û��ҩ��
									 delay_ms(2);
									if((READ_DEVICE5_SENSOR2 == READHIGH)&&(Channel.ch5.timeoutstart ==0)){//����������û��ҩ��
										temp++;
										delay_ms(2);
										if(temp == 20){
											temp = 0;		
								#if VERSIONS
											Channel.ch5.timeoutstart = 1;
											Channel.ch5.timeout = 0;
								#else
											Channel.ch5.timeoutstart = 1;
											Channel.ch5.timeout = SEND_MEDICINE_TIMEOUT/4;
								#endif
										}
									 }else{
										temp = 0;	
									}
							  }
							if((Channel.ch5.send_num <= Channel.ch5.motor_pulse)||(SEND_MEDICINE_TIMEOUT <= Channel.ch5.timeout)||\
                  (Channel.ch5.send_jam_time ==0)){ //���ת������ô��Ȧ����Ӧ�÷���ô��ҩ
// 									Channel.ch4.state = WORKEND;
									Channel.ch5.timeoutstart = 0;
									Channel.ch5.timeout = 0;
								#if VERSIONS
								  if(Channel.ch5.motor_state == 0){
								//	DEVICE4_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch5.state = WORKEND;
									}
								#else
										DEVICE5_MOTOR_STOP;						//ֹͣ�ȵ��ת��ԭ��ͣ
										Channel.ch5.motor_state = 0;
										Channel.ch5.state = WORKEND;
									  if(Channel.ch5.send_num != Channel.ch5.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch5.motor_state == 0){ //���ֹͣ���ټ���״̬	
									if(Channel.ch5.send_num >0){
										if(Channel.ch5.motor_pulse > 0){//���ת���ˣ�
											#if VERSIONS
												if(Channel.ch5.send_actual == Channel.ch5.send_num){//ʵ�ʷ�ҩ��������ҩ
													MCU_Host_Send.control.ch5_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch5_num = Channel.ch5.send_actual;
												}else{
													MCU_Host_Send.control.ch5_state = 2;
													MCU_Host_Send.control.ch5_num = Channel.ch5.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch5_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch5_num = Channel.ch5.motor_pulse;
												}else{//��ҩ����ҩ��������ҩ��������ϴ�������Ϣ����λ��
													MCU_Host_Send.control.ch5_state = 2;							//����״̬��PC
													MCU_Host_Send.control.ch5_num = 0xFF;
													Channel.ch5.err_flag = 1;
												}
											#endif
												Channel.ch5.motor_state = 0;
												DEVICE5_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}else{//���û��ת������е����
													MCU_Host_Send.control.ch5_state = 0XFF;
													if(Channel.ch5.send_num >0){//��λ������
														MCU_Host_Send.control.ch5_num =  0;
													}else{//��λ������
														MCU_Host_Send.control.ch5_num =0xFF;
													}
													Channel.ch5.err_flag = 1;
													Channel.ch5.motor_state = 0;
													DEVICE5_MOTOR_STOP;	//״̬������������ʵ�ʷ�ҩ���͵�������Ƿ��������ҩ����������ֹͣ��������⴫������ʱһֱת
										}
									}else{
											MCU_Host_Send.control.ch5_state = 2;							//����״̬��PC
											MCU_Host_Send.control.ch5_num =  0;
									}
									  no_medicine_flag = 0;
										Channel.ch5.state = END;
							}else{
                    #if VERSIONS    //�м�����⿪��ʱ����������������⿪�ػ�һֱ��ҩ�����
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch5.timeout){
                      DEVICE5_MOTOR_STOP;
                      Channel.ch5.timeoutstart = 0; //�ظ�����timeout
                      Channel.ch5.timeout = 0;
                    }
                    #endif
              }
								break ;
	case END:	if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){		//��ҩ��ɻ��߿���ʱ���Ը�λ
										delay_ms(1);
										if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){
											DEVICE5_MOTOR_RUN;	
											Channel.ch5.motor_state = 1;
										}
								}
							break;
	default :
								break;	
	}	
}
#endif
//=============================================================================
//��������:CH_Send_Medicine
//���ܸ�Ҫ:����ͨ����ҩ����
//��������:��
//��������:��
//ע��    :��
//=============================================================================
void CH_Send_Medicine(void)
{
	u16 crc;
	if(MCU_State == HOST){
		CH1_Send_Medicine();
		CH2_Send_Medicine();
		CH3_Send_Medicine();
		CH4_Send_Medicine();
#if CHANNEL_4 == 0
		CH5_Send_Medicine();
		if((Channel.ch1.state == END)&&(Channel.ch2.state == END)&&(Channel.ch3.state == END)&&\
      (Channel.ch4.state == END)&&(Channel.ch5.state == END)){
#else
		if((Channel.ch1.state == END)&&(Channel.ch2.state == END)&&(Channel.ch3.state == END)&&(Channel.ch4.state == END)){
#endif
			while(Usart1_Control_Data.tx_count);//����ͨ����ûҩ�������������ȴ����ڷ����������ٻظ�PC
			Usart1_Control_Data.tx_count = 0;
			Send_Medicine_Finish_State = 1;					//����ͨ����ҩ���״̬����Ƥ���ã�������ݶ�ת��ҩ������Ƥ��ֹͣʱ���Ѿ����ˡ�
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = 0x01;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = 0x58;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = 0x00;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = 0x0A;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch1_state;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch1_num;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch2_state;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch2_num;	
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch3_state;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch3_num;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch4_state;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch4_num;	
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch5_state;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = MCU_Host_Send.control.ch5_num;
			crc=CRC_GetCCITT(Usart1_Control_Data.txbuf,Usart1_Control_Data.tx_count);
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = (crc>>8)&0xFF; 
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = crc&0xFF;
		  Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = 0X0D;
			Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_count++] = 0X0A;
			
			CH_Param_Init();//ִ��������ͨ����ҩ�Ĺ��̣���ʼ��ͨ��״̬��
			PC_Answer.Nanswer_timeout = NANSWER_TIME;
			PC_Answer.answer_numout = NANSWER_NUMOUT;
			PC_Answer.answer_state = 1;
			Usart1_Control_Data.tx_index = 0;	
			USART_SendData(USART1,Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_index++]);
			BELT_SPEED1 = 0;
			BELT_SPEED2 = 0;
			BELT_SPEED3 = 0;
		}
	}else{//�ӻ�ģʽ
			if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){		//�ӻ�ģʽ�κ�ʱ�򶼿��Ը�λ
					delay_ms(1);
					if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){
						DEVICE1_MOTOR_RUN;
						Channel.ch1.motor_state = 1;	
						Channel.ch1.err_flag = 0;							
					}
			}

			if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){		//�ӻ�ģʽ�κ�ʱ�򶼿��Ը�λ
					delay_ms(1);
					if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){
						DEVICE2_MOTOR_RUN;
						Channel.ch2.motor_state = 1;
						Channel.ch2.err_flag = 0;							
					}
			}
			if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){		//�ӻ�ģʽ�κ�ʱ�򶼿��Ը�λ
					delay_ms(1);
					if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){
						DEVICE3_MOTOR_RUN;
						Channel.ch3.motor_state = 1;	
						Channel.ch3.err_flag = 0;	
					}
			}
			if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){		//�ӻ�ģʽ�κ�ʱ�򶼿��Ը�λ
					delay_ms(1);
					if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){
						DEVICE4_MOTOR_RUN;
						Channel.ch4.motor_state = 1;
            Channel.ch4.err_flag = 0;							
					}
			}		
			#if CHANNEL_4==0
			if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){		//�ӻ�ģʽ�κ�ʱ�򶼿��Ը�λ
					delay_ms(1);
					if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){
						DEVICE5_MOTOR_RUN;
						Channel.ch5.motor_state = 1;
            Channel.ch5.err_flag = 0;							
					}
			}			
			#endif
  }  
}
//=============================================================================
//��������:CH_Light_Control
//���ܸ�Ҫ:����ͨ���ƵĿ���
//��������:��
//��������:��
//ע��    :��
//=============================================================================
void CH_Light_Control(void )
{
	static u8 ch1_blink_temp=0;
	static u8 ch2_blink_temp=0;
	static u8 ch3_blink_temp=0;
	static u8 ch4_blink_temp=0;
	#if CHANNEL_4==0
	static u8 ch5_blink_temp=0;
	#endif
	if(Channel.ch1.err_flag == 0){
		if(Channel.ch1.motor_state == 1 ){
				DEVICE1_LIGHT_ON;
		}else{
				DEVICE1_LIGHT_OFF;
		}
	}else{
			 if(Channel.ch1.err_flash_time == 0){
				 if(ch1_blink_temp == 0){
						DEVICE1_LIGHT_ON;
					  ch1_blink_temp = 1;
					}else{
            DEVICE1_LIGHT_OFF;
						ch1_blink_temp = 0;
					}
					Channel.ch1.err_flash_time = 100;
			}
	}
	if(Channel.ch2.err_flag == 0){
		if(Channel.ch2.motor_state == 1 ){
				DEVICE2_LIGHT_ON;
		}else{
				DEVICE2_LIGHT_OFF;
		}
	}else{
			 if(Channel.ch2.err_flash_time == 0){
				 if(ch2_blink_temp == 0){
						DEVICE2_LIGHT_ON;
					  ch2_blink_temp = 1;
					}else{
            DEVICE2_LIGHT_OFF;
						ch2_blink_temp = 0;
					}
					Channel.ch2.err_flash_time = 100;
			}
	}
	if(Channel.ch3.err_flag == 0){
		if(Channel.ch3.motor_state == 1 ){
				DEVICE3_LIGHT_ON;
		}else{
				DEVICE3_LIGHT_OFF;
		}
	}else{
			 if(Channel.ch3.err_flash_time == 0){
				 if(ch3_blink_temp == 0){
						DEVICE3_LIGHT_ON;
					  ch3_blink_temp = 1;
					}else{
            DEVICE3_LIGHT_OFF;
						ch3_blink_temp = 0;
					}
					Channel.ch3.err_flash_time = 100;
			}
	}
	if(Channel.ch4.err_flag == 0){
		if(Channel.ch4.motor_state == 1 ){
				DEVICE4_LIGHT_ON;
		}else{
  				DEVICE4_LIGHT_OFF;
		}
	}else{
			 if(Channel.ch4.err_flash_time == 0){
				 if(ch4_blink_temp == 0){
						DEVICE4_LIGHT_ON;
					  ch4_blink_temp = 1;
					}else{
            DEVICE4_LIGHT_OFF;
						ch4_blink_temp = 0;
					}
					Channel.ch4.err_flash_time = 100;
			}
	}
	#if CHANNEL_4==0
	if(Channel.ch5.err_flag == 0){
		if(Channel.ch5.motor_state == 1 ){
				DEVICE5_LIGHT_ON;
		}else{
  			DEVICE5_LIGHT_OFF;
		}
	}else{
			 if(Channel.ch5.err_flash_time == 0){
				 if(ch5_blink_temp == 0){
						DEVICE5_LIGHT_ON;
					  ch5_blink_temp = 1;
					}else{
            DEVICE5_LIGHT_OFF;
						ch5_blink_temp = 0;
					}
					Channel.ch5.err_flash_time = 100;
			}
	}
	#endif
}
//=============================================================================
//��������:Send_Medicine_Time_ISR
//���ܸ�Ҫ:ͨѶ��ʱ�򳬴�������
//��������:��
//��������:��
//ע��    :��
//=============================================================================
void Send_Medicine_Time_ISR(void )
{
	if(PC_Answer.answer_state == 1){
		if(PC_Answer.Nanswer_timeout > 0){
				PC_Answer.Nanswer_timeout--;
		}else{//������ʱû����Ӧ������ȷӦ����MCUת��Ϊ�ӻ�ģʽ��
				MCU_State = SLAVE;
				PC_Answer.Nanswer_timeout = NANSWER_TIME;
				PC_Answer.answer_numout = NANSWER_NUMOUT;
				PC_Answer.answer_state = 0;			
		}
		if(PC_Answer.answer_numout > 0){
				PC_Answer.answer_numout=PC_Answer.answer_numout;//�Լ�������������
		}else{//MCU������N��������û����Ӧ��ȷ��Ӧ�𣬵���ȷӦ����MCUת��Ϊ�ӻ�ģʽ��
				MCU_State = SLAVE;
				PC_Answer.Nanswer_timeout = NANSWER_TIME;
				PC_Answer.answer_numout = NANSWER_NUMOUT;
				PC_Answer.answer_state = 0;				
		}
	}
	if(Channel.ch1.motor_start_state == 1){
			Channel.ch1.motor_start_time++;
			if(Channel.ch1.motor_start_time >= MOTOR_START_DELAYTIME){
				Channel.ch1.motor_start_state = 0;
				Channel.ch1.motor_start_time = 0;
			}
	}
	if(Channel.ch2.motor_start_state == 1){
			Channel.ch2.motor_start_time++;
			if(Channel.ch2.motor_start_time >= MOTOR_START_DELAYTIME){
				Channel.ch2.motor_start_state = 0;
				Channel.ch2.motor_start_time = 0;
			}
	}
	if(Channel.ch3.motor_start_state == 1){
			Channel.ch3.motor_start_time++;
			if(Channel.ch3.motor_start_time >= MOTOR_START_DELAYTIME){
				Channel.ch3.motor_start_state = 0;
				Channel.ch3.motor_start_time = 0;
			}
	}
	if(Channel.ch4.motor_start_state == 1){
			Channel.ch4.motor_start_time++;
			if(Channel.ch4.motor_start_time >= MOTOR_START_DELAYTIME){
				Channel.ch4.motor_start_state = 0;
				Channel.ch4.motor_start_time = 0;
			}
	}
	if(Channel.ch5.motor_start_state == 1){
			Channel.ch5.motor_start_time++;
			if(Channel.ch5.motor_start_time >= MOTOR_START_DELAYTIME){
				Channel.ch5.motor_start_state = 0;
				Channel.ch5.motor_start_time = 0;
			}
	}
	if(Channel.ch1.state == WORKING){
		if(Channel.ch1.timeoutstart == 1){
			Channel.ch1.timeout++;
		}
	}
	if(Channel.ch2.state == WORKING){
		if(Channel.ch2.timeoutstart == 1){
			Channel.ch2.timeout++;
		}
	}
	if(Channel.ch3.state == WORKING){
		if(Channel.ch3.timeoutstart == 1){
			Channel.ch3.timeout++;
		}
	}
	if(Channel.ch4.state == WORKING){
		if(Channel.ch4.timeoutstart == 1){
			Channel.ch4.timeout++;
		}
	}
	if(Channel.ch5.state == WORKING){
		if(Channel.ch5.timeoutstart == 1){
			Channel.ch5.timeout++;
		}
	}
	if(Channel.ch1.err_flash_time > 0){
			Channel.ch1.err_flash_time--;
	}
	if(Channel.ch2.err_flash_time > 0){
			Channel.ch2.err_flash_time--;
	}
	
	if(Channel.ch3.err_flash_time > 0){
			Channel.ch3.err_flash_time--;
	}
	if(Channel.ch4.err_flash_time > 0){
			Channel.ch4.err_flash_time--;
	}
	if(Channel.ch5.err_flash_time > 0){
			Channel.ch5.err_flash_time--;
	}
	if(Channel.ch1.send_jam_time > 0){
		Channel.ch1.send_jam_time--;
	}
		if(Channel.ch2.send_jam_time > 0){
		Channel.ch2.send_jam_time--;
	}
		if(Channel.ch3.send_jam_time > 0){
		Channel.ch3.send_jam_time--;
	}
		if(Channel.ch4.send_jam_time > 0){
		Channel.ch4.send_jam_time--;
	}
		if(Channel.ch5.send_jam_time > 0){
		Channel.ch5.send_jam_time--;
	}
}


