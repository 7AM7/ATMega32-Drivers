#ifdef LIBS_DIO_TYPES_H_
#define LIBS_DIO_TYPES_H_

//Read/Write BIT FROM REGISTER
#define write_bit(reg, bit_no) reg = reg | (1  << bit_no)
#define read_bit(reg, bit_no) ((reag >> bit_no) & 0x01)

//CLEAR BIT FROM REGISTER
#define clr_bit(reg, bit_no) reg = reg & (~(1  << bit_no))

//TOGGLE BIT FROM REGISTER
#define toggle_bit(reg, bit_no) reg = reg ^ (1  << bit_no)

#endif