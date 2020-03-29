#include "LCD_INIT.h"

void LCD_Init()
{
	_delay_ms(40);

	LCD_SendCommand(0x38);

	_delay_ms(1);

	LCD_SendCommand(0x0c);

	_delay_ms(1);

	LCD_SendCommand(0x01);

	_delay_ms(2);
}

void LCD_SendCommand(u8 cmd)
{
	// disable Enable Pin
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_EN, LOW);

	// RS Command: low -- for send command
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_RS, LOW);

	// RW Command: low -- for wrtie on LCD
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_RW, LOW);

	// Send thr command
	DIO_SetPortValue(LCD_DATA_PORT, cmd);

	// delay
	_delay_ms(1);

	// enable the enable bin to read the command
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_EN, HIGH);

	// delay
	_delay_ms(1);

	// disable Enable Pin
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_EN, LOW);
}

void LCD_WriteChar(u8 writeCmd)
{
	// disable Enable Pin
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_EN, LOW);

	// RS data: low -- for send data
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_RS, HIGH);

	// RW data: low -- for wrtie on LCD
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_RW, LOW);

	// Send thr data
	DIO_SetPortValue(LCD_DATA_PORT, writeCmd);

	// delay
	_delay_ms(1);

	// enable the enable bin to read the data
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_EN, HIGH);

	// delay
	_delay_ms(1);

	// disable Enable Pin
	DIO_SetPinValue(LCD_CTRL_PORT, LCD_EN, LOW);
}

void LCD_WriteWord(u8 word)
{
	for(u8 i = 0; word[i]!=0; i++)
	{
		LCD_WriteChar(word[i]);
	}
}