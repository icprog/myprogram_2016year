#include"HeadType.h"	
extern u8 Send_Medicine_Finish_State;
//=============================================================================
//函数名称:Send_Medicine1_Config
//功能概要:发药口1相关引脚配置
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void Send_Medicine1_Config(void)
{
		//定义一个GPIO_InitTypeDef 类型的结构体，名字叫GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//电机控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE1_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE1_MOTOR_PORT, &GPIO_InitStructure);
	//灯控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE1_LIGHT_IO;			 
	GPIO_Init(DEVICE1_LIGHT_PORT, &GPIO_InitStructure);
	//传感器1输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE1_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE1_SENSOR1_PORT, &GPIO_InitStructure);
	//传感器2输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE1_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE1_SENSOR2_PORT, &GPIO_InitStructure);
	//传感器3输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE1_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE1_SENSOR3_PORT, &GPIO_InitStructure);
	//按键输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE1_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE1_KEY_PORT, &GPIO_InitStructure);
	
}
//=============================================================================
//函数名称:Send_Medicine2_Config
//功能概要:发药口2相关引脚配置
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void Send_Medicine2_Config(void )
{
		//定义一个GPIO_InitTypeDef 类型的结构体，名字叫GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//电机控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE2_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE2_MOTOR_PORT, &GPIO_InitStructure);
	//灯控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE2_LIGHT_IO;			 
	GPIO_Init(DEVICE2_LIGHT_PORT, &GPIO_InitStructure);
	//传感器1输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE2_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE2_SENSOR1_PORT, &GPIO_InitStructure);
	//传感器2输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE2_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE2_SENSOR2_PORT, &GPIO_InitStructure);
	//传感器3输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE2_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE2_SENSOR3_PORT, &GPIO_InitStructure);
	//按键输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE2_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE2_KEY_PORT, &GPIO_InitStructure);
}

//=============================================================================
//函数名称:Send_Medicine3_Config
//功能概要:发药口3相关引脚配置
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void Send_Medicine3_Config(void)
{
		//定义一个GPIO_InitTypeDef 类型的结构体，名字叫GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//电机控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE3_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE3_MOTOR_PORT, &GPIO_InitStructure);
	//灯控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE3_LIGHT_IO;			 
	GPIO_Init(DEVICE3_LIGHT_PORT, &GPIO_InitStructure);
	//传感器1输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE3_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE3_SENSOR1_PORT, &GPIO_InitStructure);
	//传感器2输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE3_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE3_SENSOR2_PORT, &GPIO_InitStructure);
	//传感器3输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE3_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE3_SENSOR3_PORT, &GPIO_InitStructure);
	//按键输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE3_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE3_KEY_PORT, &GPIO_InitStructure);
}
//=============================================================================
//函数名称:Send_Medicine4_Config
//功能概要:发药口4相关引脚配置
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void Send_Medicine4_Config(void)
{
		//定义一个GPIO_InitTypeDef 类型的结构体，名字叫GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//电机控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE4_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE4_MOTOR_PORT, &GPIO_InitStructure);
	//灯控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE4_LIGHT_IO;			 
	GPIO_Init(DEVICE4_LIGHT_PORT, &GPIO_InitStructure);
	//传感器1输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR1_PORT, &GPIO_InitStructure);
	//传感器2输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE4_SENSOR2_PORT, &GPIO_InitStructure);
	//传感器3输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR3_PORT, &GPIO_InitStructure);
	//按键输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE4_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE4_KEY_PORT, &GPIO_InitStructure);
}
#if CHANNEL_4 == 0
//=============================================================================
//函数名称:Send_Medicine4_Config
//功能概要:发药口4相关引脚配置
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void Send_Medicine5_Config(void)
{
		//定义一个GPIO_InitTypeDef 类型的结构体，名字叫GPIO_InitStructure 
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);
	//电机控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE5_MOTOR_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE5_MOTOR_PORT, &GPIO_InitStructure);
	//灯控制IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE5_LIGHT_IO;			 
	GPIO_Init(DEVICE5_LIGHT_PORT, &GPIO_InitStructure);
	//传感器1输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR1_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR1_PORT, &GPIO_InitStructure);
	//传感器2输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE5_SENSOR2_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE5_SENSOR2_PORT, &GPIO_InitStructure);
	//传感器3输入IO口
// 	GPIO_InitStructure.GPIO_Pin = DEVICE4_SENSOR3_IO;			 
// 	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
// 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
// 	GPIO_Init(DEVICE4_SENSOR3_PORT, &GPIO_InitStructure);
	//按键输入IO口
	GPIO_InitStructure.GPIO_Pin = DEVICE5_KEY_IO;			 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; 		 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEVICE5_KEY_PORT, &GPIO_InitStructure);
}


#endif
//=============================================================================
//函数名称:CH_Param_Init
//功能概要:每个通道相关参数的初始化
//参数名称:无
//函数返回:无
//注意    :无
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
//函数名称:Param_Init
//功能概要:初始化变量和参数
//参数名称:无
//函数返回:无
//注意    :无
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
//函数名称:Send_Medicine_Config
//功能概要:初始化所有通道
//参数名称:无
//函数返回:无
//注意    :无
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
//函数名称:CH1_Send_Medicine
//功能概要:通道1状态机处理发药
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void CH1_Send_Medicine(void)
{
	static u16 temp = 0,temp1 = 0;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch1.state){
	case RESERVE:	Channel.ch1.motor_pulse = 0;
								Channel.ch1.send_actual = 0;
								if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){		//发药完成或者空闲并且发药机无药时可以复位
									delay_ms(2);
									if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){
										DEVICE1_MOTOR_RUN;
                    Channel.ch1.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME; 
										Channel.ch1.motor_state = 1;	
										Channel.ch1.err_flag = 0;										
									}
								}
								break;
	case READY:	 if((Channel.ch2.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch4.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch1.send_num >0)&&(Channel.ch1.motor_state == 0 )&&(Channel.ch1.err_flag == 0)){									
										if(READ_DEVICE1_SENSOR2 == READLOW){//发药机上有药，启动电机
											delay_ms(1);
											if(READ_DEVICE1_SENSOR2 == READLOW){
													Channel.ch1.motor_pulse = 0;
													Channel.ch1.send_actual = 0;
													Channel.ch1.state = WORKING;
												  Channel.ch1.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch1.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;                       
													DEVICE1_MOTOR_RUN;
												  BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch1.motor_state = 1;
													Channel.ch1.motor_start_state = 1;//启动瞬间只允许一个电机启动，启动后通道可以同时工作
                          temp1 = 0;
											}
										}else{	//发药机上没有药，结束
                      delay_us(100);
                      temp1++;
                      if(temp1 >= 500){
//                         Channel.ch1.state = WORKEND;
													Channel.ch1.motor_pulse = 0;
													Channel.ch1.send_actual = 0;
													Channel.ch1.state = WORKING;
												  Channel.ch1.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch1.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;                       
													DEVICE1_MOTOR_RUN;
												  BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch1.motor_state = 1;
													Channel.ch1.motor_start_state = 1;//启动瞬间只允许一个电机启动，启动后通道可以同时工作                        
                          temp1 = 0;
                      }
										}									
								}else{
									if(Channel.ch1.motor_state == 1){
										Channel.ch1.motor_state= 0;
									}else{
										Channel.ch1.state = WORKEND; 
									}
									temp1 = 0;
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
							  if((READ_DEVICE1_SENSOR2 == READHIGH)&&(Channel.ch1.timeoutstart ==0)){//工作过程中没有药了
									delay_us(100);
									if((READ_DEVICE1_SENSOR2 == READHIGH)&&(Channel.ch1.timeoutstart ==0)){//工作过程中没有药了
										temp++;
										if(temp >= 5000){
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
                ||(Channel.ch1.send_jam_time ==0)){ //电机转过了那么多圈，就应该发那么多药
// 									Channel.ch1.state = WORKEND;
									Channel.ch1.timeoutstart = 0;
									Channel.ch1.timeout = 0;
								#if VERSIONS
								  if(Channel.ch1.motor_state == 0){
								//	DEVICE1_MOTOR_STOP;						//停止等电机转回原点停
                    Channel.ch1.timeoutstart = 1; //重复利用timeout
										Channel.ch1.timeout = 0;
										Channel.ch1.state = WORKEND;
									}else{
											if(Channel.ch1.send_jam_time ==0){
													DEVICE1_MOTOR_STOP;
													Channel.ch1.motor_state = 0;
													Channel.ch1.state = END;
													MCU_Host_Send.control.ch1_state = 0XFF;
													MCU_Host_Send.control.ch1_num = Channel.ch1.send_actual;
												  Channel.ch1.err_flag = 1;//电机堵转，直接跳到结束并报故障
											}
									}
								#else
										DEVICE1_MOTOR_STOP;						//停止等电机转回原点停
										Channel.ch1.motor_state = 0;
										Channel.ch1.state = WORKEND;
									  if(Channel.ch1.send_num != Channel.ch1.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch1.motor_state == 0){ //电机停止后再计算状态
									if(Channel.ch1.send_num >0){
										if(Channel.ch1.motor_pulse > 0){//电机转动了，
											#if VERSIONS
												if(Channel.ch1.send_actual == Channel.ch1.send_num){//实际发药等于需求发药
													MCU_Host_Send.control.ch1_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch1_num = Channel.ch1.send_actual;
												}else{
													MCU_Host_Send.control.ch1_state = 2;
													MCU_Host_Send.control.ch1_num = Channel.ch1.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch1_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch1_num = Channel.ch1.motor_pulse;
												}else{//发药机发药过程中无药的情况下上传错误信息给上位机
													MCU_Host_Send.control.ch1_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch1_num = 0xFF;
													Channel.ch1.err_flag = 1;
												}
											#endif
												Channel.ch1.motor_state = 0;
												DEVICE1_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}else{//电机没有转动，机械故障
													MCU_Host_Send.control.ch1_state = 0XFF;
													if(Channel.ch1.send_num >0){//下位机故障
														MCU_Host_Send.control.ch1_num =  0;
													}else{//上位机故障
														MCU_Host_Send.control.ch1_num =0xFF;
													}
													Channel.ch1.err_flag = 1;
													Channel.ch1.motor_state = 0;
													DEVICE1_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}
									}else{
											MCU_Host_Send.control.ch1_state = 2;							//发送状态给PC
											MCU_Host_Send.control.ch1_num =  0;
									}
                   #if VERSIONS == 0    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
										no_medicine_flag = 0;
                  #endif
										Channel.ch1.state = END;
							}else{
                    #if VERSIONS    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch1.timeout){
                      DEVICE1_MOTOR_STOP;
											Channel.ch1.motor_state = 0;
											Channel.ch1.state = END;
											Channel.ch1.err_flag = 1;
                      Channel.ch1.timeoutstart = 0; //重复利用timeout
                      Channel.ch1.timeout = 0;
                    }
                    #endif
              }
								break ;	
	case END:	if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){		//发药完成或者空闲时可以复位
										delay_ms(1);
										if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){
											DEVICE1_MOTOR_RUN;
                      Channel.ch1.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;                       
											Channel.ch1.motor_state = 1;
										}
							}
								break;	//所有过程结束，等待其他通道完成工作
	default :
								break;	
	}	
}


//=============================================================================
//函数名称:CH2_Send_Medicine
//功能概要:通道2状态机处理发药
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void CH2_Send_Medicine(void)
{
	static u16 temp = 0,temp1 = 0;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch2.state){
	case RESERVE:	Channel.ch2.motor_pulse = 0;
								Channel.ch2.send_actual = 0;
								if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){		//发药完成或者空闲并且发药机无药时可以复位
									delay_ms(2);
									if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){
										DEVICE2_MOTOR_RUN;
                    Channel.ch2.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME; 
										Channel.ch2.motor_state = 1;
                    Channel.ch2.err_flag = 0;										
									}
								}
								break;
	case READY:	if((Channel.ch1.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch4.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch2.send_num >0)&&(Channel.ch2.motor_state == 0 )&&(Channel.ch2.err_flag == 0)){									
										if(READ_DEVICE2_SENSOR2 == READLOW){//发药机上有药，启动电机
											delay_ms(1);
											if(READ_DEVICE2_SENSOR2 == READLOW){
													Channel.ch2.motor_pulse = 0;
													Channel.ch2.send_actual = 0;
													Channel.ch2.state = WORKING;
												  Channel.ch2.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch2.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME; 
													DEVICE2_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch2.motor_state = 1;
													Channel.ch2.motor_start_state = 1;	
                          temp1 = 0;
											}
										}else{	//发药机上没有药，结束
                      delay_us(100);
                      temp1++;
                      if(temp1 >= 500){
//                         Channel.ch2.state = WORKEND;
													Channel.ch2.motor_pulse = 0;
													Channel.ch2.send_actual = 0;
													Channel.ch2.state = WORKING;
												  Channel.ch2.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch2.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME; 
													DEVICE2_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch2.motor_state = 1;
													Channel.ch2.motor_start_state = 1;	                        
                          temp1 = 0;
                      }
										}									
								}else{
									if(Channel.ch2.motor_state == 1){
										Channel.ch2.motor_state= 0;
									}else{
										Channel.ch2.state = WORKEND; 
									}
									temp1 = 0;
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
							 if((READ_DEVICE2_SENSOR2 == READHIGH)&&(Channel.ch2.timeoutstart ==0)){//工作过程中没有药了
									delay_us(100);
									if((READ_DEVICE2_SENSOR2 == READHIGH)&&(Channel.ch2.timeoutstart ==0)){//工作过程中没有药了
										temp++;
										if(temp >= 5000){
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
                (Channel.ch2.send_jam_time ==0)){ //电机转过了那么多圈，就应该发那么多药
// 									Channel.ch2.state = WORKEND;
									Channel.ch2.timeoutstart = 0;
									Channel.ch2.timeout = 0;
								#if VERSIONS
								  if(Channel.ch2.motor_state == 0){
								//	DEVICE2_MOTOR_STOP;						//停止等电机转回原点停
                    Channel.ch2.timeoutstart = 1; //重复利用timeout
										Channel.ch2.timeout = 0;
										Channel.ch2.state = WORKEND;
									}else{
											if(Channel.ch2.send_jam_time ==0){
													DEVICE2_MOTOR_STOP;
													Channel.ch2.motor_state = 0;
													Channel.ch2.state = END;
													MCU_Host_Send.control.ch2_state = 0XFF;
													MCU_Host_Send.control.ch2_num = Channel.ch2.send_actual;
												  Channel.ch2.err_flag = 1;//电机堵转，直接跳到结束并报故障
											}
									}
								#else
										DEVICE2_MOTOR_STOP;						//停止等电机转回原点停
										Channel.ch2.motor_state = 0;
										Channel.ch2.state = WORKEND;
									  if(Channel.ch2.send_num != Channel.ch2.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch2.motor_state == 0){ //电机停止后再计算状态
									if(Channel.ch2.send_num >0){
										if(Channel.ch2.motor_pulse > 0){//电机转动了，
											#if VERSIONS
												if(Channel.ch2.send_actual == Channel.ch2.send_num){//实际发药等于需求发药
													MCU_Host_Send.control.ch2_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch2_num = Channel.ch2.send_actual;
												}else{
													MCU_Host_Send.control.ch2_state = 2;
													MCU_Host_Send.control.ch2_num = Channel.ch2.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch2_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch2_num = Channel.ch2.motor_pulse;
												}else{//发药机发药过程中无药的情况下上传错误信息给上位机
													MCU_Host_Send.control.ch2_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch2_num = 0xFF;
													Channel.ch2.err_flag = 1;
												}
											#endif
												Channel.ch2.motor_state = 0;
												DEVICE2_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}else{//电机没有转动，机械故障
													MCU_Host_Send.control.ch2_state = 0XFF;
													if(Channel.ch2.send_num >0){//下位机故障
														MCU_Host_Send.control.ch2_num =  0;
													}else{//上位机故障
														MCU_Host_Send.control.ch2_num =0xFF;
													}
													Channel.ch2.err_flag = 1;
													Channel.ch2.motor_state = 0;
													DEVICE2_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}
									}else{
											MCU_Host_Send.control.ch2_state = 2;							//发送状态给PC
											MCU_Host_Send.control.ch2_num =  0;
									}
                   #if VERSIONS == 0    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                      no_medicine_flag = 0;
                   #endif
										Channel.ch2.state = END;
							}else{
                    #if VERSIONS    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch2.timeout){
                      DEVICE2_MOTOR_STOP;
											Channel.ch2.motor_state = 0;
											Channel.ch2.state = END;
											Channel.ch2.err_flag = 1;
                      Channel.ch2.timeoutstart = 0; //重复利用timeout
                      Channel.ch2.timeout = 0;
                    }
                    #endif
              }
								break ;	
	case END: if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){		//发药完成或者空闲时可以复位
										delay_ms(1);
										if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){
											DEVICE2_MOTOR_RUN;
                      Channel.ch2.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;                       
											Channel.ch2.motor_state = 1;
										}
								}
							 break ;
	default :
								break;	
	}	
}

//=============================================================================
//函数名称:CH3_Send_Medicine
//功能概要:通道3状态机处理发药
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void CH3_Send_Medicine(void)
{
	static u16 temp = 0,temp1 = 0;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch3.state){
	case RESERVE:	Channel.ch3.motor_pulse = 0;
								Channel.ch3.send_actual = 0;
								if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){		//发药完成或者空闲并且发药机无药时可以复位
									delay_ms(2);
									if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){
										DEVICE3_MOTOR_RUN;
                    Channel.ch3.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME; 
										Channel.ch3.motor_state = 1;
										Channel.ch3.err_flag = 0;										
									}
								}
								break;
	case READY:	if((Channel.ch2.motor_start_state != 1)&&(Channel.ch1.motor_start_state != 1)&&\
                  (Channel.ch4.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch3.send_num >0)&&(Channel.ch3.motor_state == 0 )&&(Channel.ch3.err_flag == 0)){									
										if(READ_DEVICE3_SENSOR2 == READLOW){//发药机上有药，启动电机
											delay_ms(1);
											if(READ_DEVICE3_SENSOR2 == READLOW){
													Channel.ch3.motor_pulse = 0;
													Channel.ch3.send_actual = 0;
													Channel.ch3.state = WORKING;
												  Channel.ch3.send_jam_time = SEND_MEDICINE_JAMTIME ;
                          Channel.ch3.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
													DEVICE3_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch3.motor_state = 1;
													Channel.ch3.motor_start_state = 1;
                          temp1 = 0;
											}
										}else{	//发药机上没有药，结束
                      delay_us(100);
                      temp1++;
                      if(temp1 >= 500){
//                         Channel.ch3.state = WORKEND;
													Channel.ch3.motor_pulse = 0;
													Channel.ch3.send_actual = 0;
													Channel.ch3.state = WORKING;
												  Channel.ch3.send_jam_time = SEND_MEDICINE_JAMTIME ;
                          Channel.ch3.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
													DEVICE3_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch3.motor_state = 1;
													Channel.ch3.motor_start_state = 1;                        
                          temp1 = 0;
                      }
										}								
								}else{
									if(Channel.ch3.motor_state == 1){
										Channel.ch3.motor_state= 0;
									}else{
										Channel.ch3.state = WORKEND; 
									}
									temp1 = 0;
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
							  if((READ_DEVICE3_SENSOR2 == READHIGH)&&(Channel.ch3.timeoutstart ==0)){//工作过程中没有药了
									delay_us(100);
									if((READ_DEVICE3_SENSOR2 == READHIGH)&&(Channel.ch3.timeoutstart ==0)){//工作过程中没有药了
										temp++;
										if(temp >= 5000){
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
                (Channel.ch3.send_jam_time ==0)){ //电机转过了那么多圈，就应该发那么多药
// 									Channel.ch3.state = WORKEND;
									Channel.ch3.timeoutstart = 0;
									Channel.ch3.timeout = 0;
								#if VERSIONS
								  if(Channel.ch3.motor_state == 0){
								//	DEVICE1_MOTOR_STOP;						//停止等电机转回原点停
                    Channel.ch3.timeoutstart = 1; //重复利用timeout
										Channel.ch3.timeout = 0;
										Channel.ch3.state = WORKEND;
									}else{
											if(Channel.ch3.send_jam_time ==0){
													DEVICE3_MOTOR_STOP;
													Channel.ch3.motor_state = 0;
													Channel.ch3.state = END;
													MCU_Host_Send.control.ch3_state = 0XFF;
													MCU_Host_Send.control.ch3_num = Channel.ch3.send_actual;
												  Channel.ch3.err_flag = 1;//电机堵转，直接跳到结束并报故障
											}
									}
								#else
										DEVICE3_MOTOR_STOP;						//停止等电机转回原点停
										Channel.ch3.motor_state = 0;
										Channel.ch3.state = WORKEND;
									  if(Channel.ch3.send_num != Channel.ch3.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch3.motor_state == 0){ //电机停止后再计算状态	
									if(Channel.ch3.send_num >0){
										if(Channel.ch3.motor_pulse > 0){//电机转动了，
											#if VERSIONS
												if(Channel.ch3.send_actual == Channel.ch3.send_num){//实际发药等于需求发药
													MCU_Host_Send.control.ch3_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch3_num = Channel.ch3.send_actual;
												}else{
													MCU_Host_Send.control.ch3_state = 2;
													MCU_Host_Send.control.ch3_num = Channel.ch3.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch3_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch3_num = Channel.ch3.motor_pulse;
												}else{//发药机发药过程中无药的情况下上传错误信息给上位机
													MCU_Host_Send.control.ch3_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch3_num = 0xFF;
													Channel.ch3.err_flag = 1;
												}
											#endif
												Channel.ch3.motor_state = 0;
												DEVICE3_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}else{//电机没有转动，机械故障
													MCU_Host_Send.control.ch3_state = 0XFF;
													if(Channel.ch3.send_num >0){//下位机故障
														MCU_Host_Send.control.ch3_num =  0;
													}else{//上位机故障
														MCU_Host_Send.control.ch3_num =0xFF;
													}
													Channel.ch3.err_flag = 1;
													Channel.ch3.motor_state = 0;
													DEVICE3_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}
									}else{
											MCU_Host_Send.control.ch3_state = 2;							//发送状态给PC
											MCU_Host_Send.control.ch3_num =  0;
									}
                   #if VERSIONS == 0    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                      no_medicine_flag = 0;
                   #endif
										Channel.ch3.state = END;
							}else{
                    #if VERSIONS    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch3.timeout){
                      DEVICE3_MOTOR_STOP;
											Channel.ch3.motor_state = 0;
											Channel.ch3.state = END;
											Channel.ch3.err_flag = 1;
                      Channel.ch3.timeoutstart = 0; //重复利用timeout
                      Channel.ch3.timeout = 0;
                    }
                    #endif
              }
								break ;	
	case END:	if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){		//发药完成或者空闲时可以复位
										delay_ms(1);
										if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){
											DEVICE3_MOTOR_RUN;
                      Channel.ch3.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;                      
											Channel.ch3.motor_state = 1;
										}
								}
								break ;
	default :
								break;	
	}	
}

//=============================================================================
//函数名称:CH4_Send_Medicine
//功能概要:通道4状态机处理发药
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
static void CH4_Send_Medicine(void)
{
	static u16 temp = 0,temp1 = 0;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch4.state){
	case RESERVE:	Channel.ch4.motor_pulse = 0;
								Channel.ch4.send_actual = 0;
								if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){		//发药完成或者空闲并且发药机无药时可以复位
									delay_ms(2);
									if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){
										DEVICE4_MOTOR_RUN;
                    Channel.ch4.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
										Channel.ch4.motor_state = 1;
										Channel.ch4.err_flag = 0;
									}
								}
								break;
	case READY:	if((Channel.ch2.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch1.motor_start_state != 1)&&(Channel.ch5.motor_start_state != 1)){
									if((Channel.ch4.send_num >0)&&(Channel.ch4.motor_state == 0 )&&(Channel.ch4.err_flag == 0)){									
										if(READ_DEVICE4_SENSOR2 == READLOW){//发药机上有药，启动电机
											delay_ms(1);
											if(READ_DEVICE4_SENSOR2 == READLOW){
													Channel.ch4.motor_pulse = 0;
													Channel.ch4.send_actual = 0;
													Channel.ch4.state = WORKING;
												  Channel.ch4.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch4.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
													DEVICE4_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch4.motor_state = 1;
													Channel.ch4.motor_start_state = 1;
                          temp1 = 0;
											}
										}else{	//发药机上没有药，结束
                      delay_us(100);
                      temp1++;
                      if(temp1 >= 500){
//                         Channel.ch4.state = WORKEND;
													Channel.ch4.motor_pulse = 0;
													Channel.ch4.send_actual = 0;
													Channel.ch4.state = WORKING;
												  Channel.ch4.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch4.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
													DEVICE4_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch4.motor_state = 1;
													Channel.ch4.motor_start_state = 1;                        
                          temp1 = 0;
                      }
										}									
								}else{
									if(Channel.ch4.motor_state == 1){
										Channel.ch4.motor_state= 0;
									}else{
										Channel.ch4.state = WORKEND; 
									}
									temp1 = 0;
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
							  if((READ_DEVICE4_SENSOR2 == READHIGH)&&(Channel.ch4.timeoutstart ==0)){//工作过程中没有药了
									 delay_us(100);
									if((READ_DEVICE4_SENSOR2 == READHIGH)&&(Channel.ch4.timeoutstart ==0)){//工作过程中没有药了
										temp++;
										if(temp >= 5000){
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
                  (Channel.ch4.send_jam_time ==0)){ //电机转过了那么多圈，就应该发那么多药
// 									Channel.ch4.state = WORKEND;
									Channel.ch4.timeoutstart = 0;
									Channel.ch4.timeout = 0;
								#if VERSIONS
								  if(Channel.ch4.motor_state == 0){
								//	DEVICE1_MOTOR_STOP;						//停止等电机转回原点停
                    Channel.ch4.timeoutstart = 1; //重复利用timeout
										Channel.ch4.timeout = 0;
										Channel.ch4.state = WORKEND;
									}else{
											if(Channel.ch4.send_jam_time ==0){
													DEVICE4_MOTOR_STOP;
													Channel.ch4.motor_state = 0;
													Channel.ch4.state = END;
													MCU_Host_Send.control.ch4_state = 0XFF;
													MCU_Host_Send.control.ch4_num = Channel.ch4.send_actual;
												  Channel.ch4.err_flag = 1;//电机堵转，直接跳到结束并报故障
											}
									}
								#else
										DEVICE4_MOTOR_STOP;						//停止等电机转回原点停
										Channel.ch4.motor_state = 0;
										Channel.ch4.state = WORKEND;
									  if(Channel.ch4.send_num != Channel.ch4.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch4.motor_state == 0){ //电机停止后再计算状态	
									if(Channel.ch4.send_num >0){
										if(Channel.ch4.motor_pulse > 0){//电机转动了，
											#if VERSIONS
												if(Channel.ch4.send_actual == Channel.ch4.send_num){//实际发药等于需求发药
													MCU_Host_Send.control.ch4_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch4_num = Channel.ch4.send_actual;
												}else{
													MCU_Host_Send.control.ch4_state = 2;
													MCU_Host_Send.control.ch4_num = Channel.ch4.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch4_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch4_num = Channel.ch4.motor_pulse;
												}else{//发药机发药过程中无药的情况下上传错误信息给上位机
													MCU_Host_Send.control.ch4_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch4_num = 0xFF;
													Channel.ch4.err_flag = 1;
												}
											#endif
												Channel.ch4.motor_state = 0;
												DEVICE4_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}else{//电机没有转动，机械故障
													MCU_Host_Send.control.ch4_state = 0XFF;
													if(Channel.ch4.send_num >0){//下位机故障
														MCU_Host_Send.control.ch4_num =  0;
													}else{//上位机故障
														MCU_Host_Send.control.ch4_num =0xFF;
													}
													Channel.ch4.err_flag = 1;
													Channel.ch4.motor_state = 0;
													DEVICE4_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}
									}else{
											MCU_Host_Send.control.ch4_state = 2;							//发送状态给PC
											MCU_Host_Send.control.ch4_num =  0;
									}
                   #if VERSIONS == 0    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                      no_medicine_flag = 0;
                   #endif
										Channel.ch4.state = END;
							}else{
                    #if VERSIONS    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch4.timeout){
                      DEVICE4_MOTOR_STOP;
											Channel.ch4.motor_state = 0;
											Channel.ch4.state = END;
											Channel.ch4.err_flag = 1;
                      Channel.ch4.timeoutstart = 0; //重复利用timeout
                      Channel.ch4.timeout = 0;
                    }
                    #endif
              }
								break ;
	case END:	if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){		//发药完成或者空闲时可以复位
										delay_ms(1);
										if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){
											DEVICE4_MOTOR_RUN;
                      Channel.ch4.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;                      
											Channel.ch4.motor_state = 1;
										}
								}
							break;
	default :
								break;	
	}	
}
//=============================================================================
//函数名称:CH5_Send_Medicine
//功能概要:通道5状态机处理发药
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
#if CHANNEL_4 == 0
static void CH5_Send_Medicine(void)
{
	static u16 temp = 0,temp1 = 0;
	#if (VERSIONS==0)
	static u8 no_medicine_flag = 0;
	#endif
	switch(Channel.ch5.state){
	case RESERVE:	Channel.ch5.motor_pulse = 0;
								Channel.ch5.send_actual = 0;
								if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){		//发药完成或者空闲并且发药机无药时可以复位
									delay_ms(2);
									if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){
										DEVICE5_MOTOR_RUN;
                    Channel.ch5.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
										Channel.ch5.motor_state = 1;
										Channel.ch5.err_flag = 0;
									}
								}
								break;
	case READY:	if((Channel.ch2.motor_start_state != 1)&&(Channel.ch3.motor_start_state != 1)&&\
                  (Channel.ch1.motor_start_state != 1)&&(Channel.ch4.motor_start_state != 1)){
									if((Channel.ch5.send_num >0)&&(Channel.ch5.motor_state == 0 )&&(Channel.ch5.err_flag == 0)){									
										if(READ_DEVICE5_SENSOR2 == READLOW){//发药机上有药，启动电机
											delay_ms(1);
											if(READ_DEVICE5_SENSOR2 == READLOW){
													Channel.ch5.motor_pulse = 0;
													Channel.ch5.send_actual = 0;
													Channel.ch5.state = WORKING;
												  Channel.ch5.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch5.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
													DEVICE5_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch5.motor_state = 1;
													Channel.ch5.motor_start_state = 1;
                          temp1 = 0;
											}
										}else{	//发药机上没有药，结束
                      delay_us(100);
                      temp1++;
                      if(temp1 >= 500){
//                         Channel.ch5.state = WORKEND;
													Channel.ch5.motor_pulse = 0;
													Channel.ch5.send_actual = 0;
													Channel.ch5.state = WORKING;
												  Channel.ch5.send_jam_time = SEND_MEDICINE_JAMTIME;
                          Channel.ch5.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
													DEVICE5_MOTOR_RUN;
													BELT_SPEED1 = 1;
													BELT_SPEED2 = 1;
													BELT_SPEED3 = 1;
													Channel.ch5.motor_state = 1;
													Channel.ch5.motor_start_state = 1;                        
                          temp1 = 0;
                      }
										}								
								}else{
									if(Channel.ch5.motor_state == 1){
										Channel.ch5.motor_state= 0;
									}else{
										Channel.ch5.state = WORKEND; 
									}
									temp1 = 0;
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
							  if((READ_DEVICE5_SENSOR2 == READHIGH)&&(Channel.ch5.timeoutstart ==0)){//工作过程中没有药了
									 delay_us(100);
									if((READ_DEVICE5_SENSOR2 == READHIGH)&&(Channel.ch5.timeoutstart ==0)){//工作过程中没有药了
										temp++;
										if(temp >= 5000){
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
                  (Channel.ch5.send_jam_time ==0)){ //电机转过了那么多圈，就应该发那么多药
// 									Channel.ch4.state = WORKEND;
									Channel.ch5.timeoutstart = 0;
									Channel.ch5.timeout = 0;
								#if VERSIONS
								  if(Channel.ch5.motor_state == 0){
								//	DEVICE1_MOTOR_STOP;						//停止等电机转回原点停
                    Channel.ch5.timeoutstart = 1; //重复利用timeout
										Channel.ch5.timeout = 0;
										Channel.ch5.state = WORKEND;
									}else{
											if(Channel.ch5.send_jam_time ==0){
													DEVICE5_MOTOR_STOP;
													Channel.ch5.motor_state = 0;
													Channel.ch5.state = END;
													MCU_Host_Send.control.ch5_state = 0XFF;
													MCU_Host_Send.control.ch5_num = Channel.ch5.send_actual;
												  Channel.ch5.err_flag = 1;//电机堵转，直接跳到结束并报故障
											}
									}
								#else
										DEVICE5_MOTOR_STOP;						//停止等电机转回原点停
										Channel.ch5.motor_state = 0;
										Channel.ch5.state = WORKEND;
									  if(Channel.ch5.send_num != Channel.ch5.motor_pulse){
											no_medicine_flag = 1;
										}
								#endif
								}
								break;

	case WORKEND:	if(Channel.ch5.motor_state == 0){ //电机停止后再计算状态	
									if(Channel.ch5.send_num >0){
										if(Channel.ch5.motor_pulse > 0){//电机转动了，
											#if VERSIONS
												if(Channel.ch5.send_actual == Channel.ch5.send_num){//实际发药等于需求发药
													MCU_Host_Send.control.ch5_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch5_num = Channel.ch5.send_actual;
												}else{
													MCU_Host_Send.control.ch5_state = 2;
													MCU_Host_Send.control.ch5_num = Channel.ch5.send_actual;
												}
											#else
												if(no_medicine_flag ==0){
													MCU_Host_Send.control.ch5_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch5_num = Channel.ch5.motor_pulse;
												}else{//发药机发药过程中无药的情况下上传错误信息给上位机
													MCU_Host_Send.control.ch5_state = 2;							//发送状态给PC
													MCU_Host_Send.control.ch5_num = 0xFF;
													Channel.ch5.err_flag = 1;
												}
											#endif
												Channel.ch5.motor_state = 0;
												DEVICE5_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}else{//电机没有转动，机械故障
													MCU_Host_Send.control.ch5_state = 0XFF;
													if(Channel.ch5.send_num >0){//下位机故障
														MCU_Host_Send.control.ch5_num =  0;
													}else{//上位机故障
														MCU_Host_Send.control.ch5_num =0xFF;
													}
													Channel.ch5.err_flag = 1;
													Channel.ch5.motor_state = 0;
													DEVICE5_MOTOR_STOP;	//状态机结束，不管实际发药数和电机脉冲是否等于需求发药数，都必须停止电机，避免传感器坏时一直转
										}
									}else{
											MCU_Host_Send.control.ch5_state = 2;							//发送状态给PC
											MCU_Host_Send.control.ch5_num =  0;
									}
                   #if VERSIONS == 0    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                      no_medicine_flag = 0;
                   #endif
										Channel.ch5.state = END;
							}else{
                    #if VERSIONS    //有计数检测开关时，这里做避免电机检测开关坏一直发药的情况
                    if(SEND_MEDICINE_TIMEOUT*2 <= Channel.ch5.timeout){
                      DEVICE5_MOTOR_STOP;
											Channel.ch5.motor_state = 0;
											Channel.ch5.state = END;
											Channel.ch5.err_flag = 1;
                      Channel.ch5.timeoutstart = 0; //重复利用timeout
                      Channel.ch5.timeout = 0;
                    }
                    #endif
              }
								break ;
	case END:	if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){		//发药完成或者空闲时可以复位
										delay_ms(1);
										if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){
											DEVICE5_MOTOR_RUN;
                      Channel.ch5.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
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
//函数名称:CH_Send_Medicine
//功能概要:所有通道发药控制
//参数名称:无
//函数返回:无
//注意    :无
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
			while(Usart1_Control_Data.tx_count);//所有通道都没药这种特殊情况需等待串口发送完数据再回复PC
			Usart1_Control_Data.tx_count = 0;
			Send_Medicine_Finish_State = 1;					//所有通道发药完成状态，给皮带用，避免短暂堵转后发药继续而皮带停止时间已经到了。
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
			
			CH_Param_Init();//执行完所有通道发药的过程，初始化通道状态机
			PC_Answer.Nanswer_timeout = NANSWER_TIME;
			PC_Answer.answer_numout = NANSWER_NUMOUT;
			PC_Answer.answer_state = 1;
			Usart1_Control_Data.tx_index = 0;	
			USART_SendData(USART1,Usart1_Control_Data.txbuf[Usart1_Control_Data.tx_index++]);
			BELT_SPEED1 = 0;
			BELT_SPEED2 = 0;
			BELT_SPEED3 = 0;
		}
	}else{//从机模式
			if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){		//从机模式任何时候都可以复位
					delay_ms(1);
					if((READ_DEVICE1_KEY == READLOW)&&(READ_DEVICE1_SENSOR2 == READHIGH)){
						DEVICE1_MOTOR_RUN;
            Channel.ch1.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
						Channel.ch1.motor_state = 1;	
						Channel.ch1.err_flag = 0;							
					}
			}

			if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){		//从机模式任何时候都可以复位
					delay_ms(1);
					if((READ_DEVICE2_KEY == READLOW)&&(READ_DEVICE2_SENSOR2 == READHIGH)){
						DEVICE2_MOTOR_RUN;
            Channel.ch2.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
						Channel.ch2.motor_state = 1;
						Channel.ch2.err_flag = 0;							
					}
			}
			if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){		//从机模式任何时候都可以复位
					delay_ms(1);
					if((READ_DEVICE3_KEY == READLOW)&&(READ_DEVICE3_SENSOR2 == READHIGH)){
						DEVICE3_MOTOR_RUN;
            Channel.ch3.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
						Channel.ch3.motor_state = 1;	
						Channel.ch3.err_flag = 0;	
					}
			}
			if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){		//从机模式任何时候都可以复位
					delay_ms(1);
					if((READ_DEVICE4_KEY == READLOW)&&(READ_DEVICE4_SENSOR2 == READHIGH)){
						DEVICE4_MOTOR_RUN;
            Channel.ch4.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
						Channel.ch4.motor_state = 1;
            Channel.ch4.err_flag = 0;							
					}
			}		
			#if CHANNEL_4==0
			if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){		//从机模式任何时候都可以复位
					delay_ms(1);
					if((READ_DEVICE5_KEY == READLOW)&&(READ_DEVICE5_SENSOR2 == READHIGH)){
						DEVICE5_MOTOR_RUN;
            Channel.ch5.motor_pusle_delaytime = MOTOR_PULSE_DELAYTIME;
						Channel.ch5.motor_state = 1;
            Channel.ch5.err_flag = 0;							
					}
			}			
			#endif
  }  
}
//=============================================================================
//函数名称:CH_Light_Control
//功能概要:所有通道灯的控制
//参数名称:无
//函数返回:无
//注意    :无
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
//函数名称:Send_Medicine_Time_ISR
//功能概要:通讯超时或超次数控制
//参数名称:无
//函数返回:无
//注意    :无
//=============================================================================
void Send_Medicine_Time_ISR(void )
{
	if(PC_Answer.answer_state == 1){
		if(PC_Answer.Nanswer_timeout > 0){
				PC_Answer.Nanswer_timeout--;
		}else{//主机超时没有响应，当正确应答处理，MCU转化为从机模式。
				MCU_State = SLAVE;
				PC_Answer.Nanswer_timeout = NANSWER_TIME;
				PC_Answer.answer_numout = NANSWER_NUMOUT;
				PC_Answer.answer_state = 0;			
		}
		if(PC_Answer.answer_numout > 0){
				PC_Answer.answer_numout=PC_Answer.answer_numout;//自减操作不在这里
		}else{//MCU发送了N此主机都没有响应正确的应答，当正确应答处理，MCU转化为从机模式。
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
   if(Channel.ch1.motor_pusle_delaytime > 0){
      Channel.ch1.motor_pusle_delaytime--;
  }  
   if(Channel.ch2.motor_pusle_delaytime > 0){
      Channel.ch2.motor_pusle_delaytime--;
  }
   if(Channel.ch3.motor_pusle_delaytime > 0){
      Channel.ch3.motor_pusle_delaytime--;
  }
   if(Channel.ch4.motor_pusle_delaytime > 0){
      Channel.ch4.motor_pusle_delaytime--;
  }
   if(Channel.ch5.motor_pusle_delaytime > 0){
      Channel.ch5.motor_pusle_delaytime--;
  }
}


