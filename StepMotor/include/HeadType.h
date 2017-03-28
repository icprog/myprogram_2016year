#ifndef __HEADTYPE_H_
#define __HEADTYPE_H_

#include "stm32f10x.h"
#include <stdio.h>
#include <string.h>	
#include "led.h"
#include "delay.h"
#include "beep.h"
#include "stepmotor.h"
#include "TIM.h"

/*************Typedef datatype start*******************/
typedef char int8;
typedef volatile char vint8;
typedef unsigned char uint8;
typedef volatile unsigned char vuint8;
typedef int int16;
typedef unsigned short uint16;
typedef long int32;
typedef unsigned long uint32;
typedef uint8	uchar,u8,BYTE;		/**< 8-bit value */
typedef uint8 	SOCKET;
typedef uint16	ushort,u16,WORD;	/**< 16-bit value */
typedef uint16	uint;		/**< 16-bit value */
typedef uint32	ulong;		/**< 32-bit value */
/*************Typedef datatype end*******************/

/*************define type start*******************/
#define false      (0)
#define true       (!false)

#ifndef NULL
#define NULL  ((void *)(0))
#endif

#define RxBufMax 512
#define TxBufMax 512

/*************define type end*******************/

/*************union type start*******************/
typedef union{
	long l;
	unsigned long ul;
	int  i;
	unsigned int ui;
	short si[2];
	char  c[4];
	unsigned char uc[4];	
}UL;

typedef union{
	short i;
	unsigned short ui;
	char c[2];
	unsigned char uc[2];
}UI;

/*************union type end*******************/

/*************enum type start*******************/
enum
{
	False=0,True
};

typedef enum{
	RESERVE = 0,
	SOFT_START,
	SOFT_STOP,
	FAST_START,
	FAST_STOP,
	AlWAYS_RUN,
	PULSE_RUN
}Motor_Mode_Type;
/*************enum type end*******************/

/*************struct type start*******************/

typedef struct{
    u16 tx_index;        //���͵�ǰ���ݵ�����
    u16 rx_index;        //���յ���ǰ���ݵ�����
    u16 tx_count;        //������������
    u16 rx_count;        //������������
    u8 rx_start;
    u8 rx_aframe;       //�Ѿ����յ�һ֡����
    u8 txbuf[RxBufMax]; //�������ݻ�����
    u8 rxbuf[RxBufMax]; //�������ݻ�����
}Usart_Type;

typedef	struct{
	Motor_Mode_Type	 run_mode;	
	u32  pules_count;
	u32	 frequency;
}Motor_Type;
/*************struct type end*******************/

/*************extern variable start*******************/
extern char Auto_Frame_Time1;
extern char Auto_Frame_Time2;
extern Usart_Type Usart1_Control_Data;
extern Usart_Type Usart2_Control_Data;
extern Motor_Type  Step_Motor;;

/*************extern variable end*******************/

/*************function start*******************/
u16 CRC_GetModbus16(u8 *pdata, int len);
u16 CRC_GetCCITT(u8 *pdata, int len);
/*************function end*******************/
#endif


