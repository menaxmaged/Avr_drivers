/*********************************************************************************/
/*********************************************************************************/
/**************  @Author    : Ahmed Gomaa Mohammed  	**************************/
/**************  Layer		: MCAL                      **************************/
/**************  File name	: DIO_register.h			**************************/
/**************  Date       : 27 AUG 2022               **************************/
/**************  Version    : V01                       **************************/
/*********************************************************************************/
/*********************************************************************************/
#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_


/***************************************************************/
/* 						GROUP A REGISTERS 				       */
/***************************************************************/
#define 	PORTA	*((volatile u8*)0x3B)
#define 	DDRA	*((volatile u8*)0x3A)
#define 	PINA	*((volatile u8*)0x39)
/***************************************************************/
/* 						GROUP B REGISTERS 				       */
/***************************************************************/
#define 	PORTB	*((volatile u8*)0x38)
#define 	DDRB	*((volatile u8*)0x37)
#define 	PINB	*((volatile u8*)0x36)
/***************************************************************/
/* 						GROUP C REGISTERS 				       */
/***************************************************************/
#define 	PORTC	*((volatile u8*)0x35)
#define 	DDRC	*((volatile u8*)0x34)
#define 	PINC	*((volatile u8*)0x33)
/***************************************************************/
/* 						GROUP D REGISTERS 				       */
/***************************************************************/
#define 	PORTD	*((volatile u8*)0x32)
#define 	DDRD	*((volatile u8*)0x31)
#define 	PIND	*((volatile u8*)0x30)

/***************************************************************/
/* 						END OF FILE 	 				       */
/***************************************************************/
#endif