#ifndef __24CXX_H
#define __24CXX_H
#include "stm32f10x.h"

//如果移植程序时只要改一下三个地方就行了
/* 定时使用的IO口 */
#define I2C_SCL GPIO_Pin_6	  
#define I2C_SDA GPIO_Pin_7	  
#define GPIO_I2C GPIOB

#define I2C_SCL_H GPIO_SetBits(GPIO_I2C,I2C_SCL)
#define I2C_SCL_L GPIO_ResetBits(GPIO_I2C,I2C_SCL)

#define I2C_SDA_H GPIO_SetBits(GPIO_I2C,I2C_SDA)
#define I2C_SDA_L GPIO_ResetBits(GPIO_I2C,I2C_SDA)

#define Read_I2C_SDA GPIO_ReadInputDataBit(GPIO_I2C,I2C_SDA)
#define Read_I2C_SCL GPIO_ReadInputDataBit(GPIO_I2C,I2C_SCL)

#define AT24C01  127
#define AT24C02  255
#define AT24C04  511
#define AT24C08  1023
#define AT24C16  2047
#define AT24C32  4095
#define AT24C64  8191
#define AT24C128 16383
#define AT24C256 32767

#define EE_TYPE  AT24C02

typedef enum{
  ACK  = 0,
  NACK = 1,
}etI2cAck;

void delay_nus(u32 nus);
void delay_nms(u32 nms);
/* 声明全局函数 */
void I2C_INIT(void);
void I2C_SDA_OUT(void);
void I2C_SDA_IN(void);
void I2C_SCL_OUT(void);
void I2C_SCL_IN(void);
void I2C_Start(void);
void I2C_Stop(void);
void I2C_Ack(void);
void I2C_NAck(void);
u8   I2C_Wait_Ack(void);
void I2C_Send_Byte(u8 txd);
u8   I2C_Read_Byte(u8 ack);
void  SDA_OPEN(void);
void  SCL_OPEN(void);



/* 声明全局函数 */
void AT24CXX_Init(void);
u8 AT24CXX_ReadOneByte(u16 addr);
void AT24CXX_WriteOneByte(u16 addr,u8 dt);
u8 AT24CXX_Check(void);
void AT24CXX_WriteLenByte(u16 WriteAddr,u32 DataToWrite,u8 Len);
u32 AT24CXX_ReadLenByte(u16 ReadAddr,u8 Len);
void AT24CXX_Read(u16 ReadAddr,u8 *pBuffer,u16 NumToRead);
void AT24CXX_Write(u16 WriteAddr,u8 *pBuffer,u16 NumToWrite);
u8 I2C_WriteByte(u8 txByte);
u8 I2C_ReadByte(u8 ack);
#endif
















