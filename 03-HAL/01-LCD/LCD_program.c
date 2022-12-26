#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_Math.h"

#include "DIO_INTERFACE.h"

#include "LCD_config.h"
#include "LCD_interface.h"
#include "LCD_private.h"

void LCD_voidSendEnablePulse(void);{
DIO_u8SetPinValue(LCD_u8_CTRL_PORT,LCD_u8_E_PIN,DIO_u8_PIN_HIGH);
_delay_ms(10);
DIO_u8SetPinValue(LCD_u8_CTRL_PORT,LCD_u8_E_PIN,DIO_u8_PIN_LOW;


}



LCD_voidinit () {
  _delay_ms(40);

LCD_voidSendCommand(0b00111000);



}

LCD_voidSendCommand (u8 Copy_u8Command) {


DIO_u8SetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RS_PIN,DIO_u8_PIN_LOW);
DIO_u8SetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RW_PIN,DIO_u8_PIN_LOW);
LCD_voidSendEnablePulse();
DIO_u8SetPortVaue(LCD_u8_DATA_PORT,Copy_u8Command);

}
    

LCD_voidSendData (u8 Copy_u8Data){

DIO_u8SetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RS_PIN,DIO_u8_PIN_HIGH);
DIO_u8SetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RW_PIN,DIO_u8_PIN_LOW);
DIO_u8SetPortVaue(LCD_u8_DATA_PORT,Copy_u8Data);
LCD_voidSendEnablePulse();


} 

LCD_voidSendString (const char * copy_pchString)  

LCD_voidSendNumber (u32 Copy_u32Number)

LCD_voidSetPostion (u8 Copy_u8Row, u8 Copy_u8Column) 




LCD_voidClear(){
// Clears LCD
LCD_voidSendCommand(0b00000001);
}



