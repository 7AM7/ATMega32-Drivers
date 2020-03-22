#ifdef DIO_INIT_H_
#define DIO_INIT_H_

// register PORTs
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

// board ports Init
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#define HIGH 1
#define LOW 0

// register DDRs
#define DDRA 0
#define DDRB 1
#define DDRC 2
#define DDRD 3

#define OUPUT 1
#define INPUT 0

// register PINs
#define PINA 0
#define PINB 1
#define PINC 2
#define PIND 3

void DIO_SetPinValue(u8 DIO_PORT_ID, u8 DIO_PIN_ID, u8 DIO_PinVal);
u8 DIO_GetPinValue(u8 DIO_REG_PIN, u8 DIO_PIN_ID);
void DIO_SetPinDirection(u8 DIO_DDR_ID, u8 DIO_PIN_ID, u8 DIO_DDRVal);

void DIO_SetPortValue(u8 DIO_PORT_ID, u8 DIO_PortVal);
u8 DIO_GetPortValue(u8 DIO_PORT_ID);
void DIO_SetPortDirection(u8 DIO_DDR_ID, u8 DIO_DDRVal);

#endif