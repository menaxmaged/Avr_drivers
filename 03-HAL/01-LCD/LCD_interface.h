#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

#define LCD_u8_LINE_ONE         0
#define LCD_u8_LINE_TWO         1


void LCD_voidSendData (u8 Copy_u8Data); //send Char

void LCD_voidSendCommand (u8 Copy_u8Command);  //send Command

void LCD_voidinit (); //initialize lcd 16x2

void LCD_voidSendString (const char * copy_pchString);  // send multi char (string)

void LCD_voidSendNumber (u32 Copy_u32Number); //send send Number

void LCD_voidSetPostion (u8 Copy_u8Row, u8 Copy_u8Column); //set Position

void LCD_voidClear(); //clear screen

#endif
