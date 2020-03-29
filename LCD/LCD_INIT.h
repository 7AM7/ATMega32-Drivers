#ifdef LCD_INIT_H_
#define LCD_INIT_H_


// ports uses for LCD
#define LCD_DATA_PORT PORTA
#define LCD_CTRL_PORT PORTB

// control pins
#define LCD_RS PIN7
#define LCD_RW PIN6
#define LCD_EN PIN5

void LCD_SendCommand(u8 cmd);
void LCD_WriteChar(u8 writeCmd);
void LCD_Init();

void LCD_GoToXY(u8 xpose, u8 ypose);
void LCD_specialChar(u8 *pattern, u8 block_no, u8 x, u8 y);
void LCD_WriteWord(u8 word[]);
void LCD_WriteNumber(u16 number);

#endif