#include <stdlib.h>
#include <stdio.h>



typedef unsigned char	u8;
typedef unsigned short	u16;
typedef unsigned long	u32;
typedef signed char		s8;
typedef signed short		s16;
typedef signed long		s32;
typedef unsigned int		uint;
typedef signed int		sint;


struct font_struct
{
	u16 width;
	u16 height;
	u16 size;	// number of chars
	u8 *data;
	u32 align; // size of each char in bytes
	u32 line_size;  // size of each line in bytes
};
typedef struct font_struct FONT;
	
//#include "sys/font_8x8.h"

#define FONTWIDTH (16)
#define FONTHEIGHT (16)
#define FONTNUM (128)
#define FONTALIGN (32)
#define FONTDATAMAX (FONTALIGN * FONTNUM)


unsigned char font_16x16_data[FONTDATAMAX] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 000 '' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x3F, 0xFC, 0x30, 0x0C, 0x36, 0x6C, 0x30, 0x0C, 0x31, 0x8C, 0x34, 0x2C, 0x33, 0xCC, 0x3F, 0xFC, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,            								
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x3F, 0xFC, 0x3F, 0xFC, 0x39, 0x9C, 0x3F, 0xFC, 0x3E, 0x7C, 0x3B, 0xDC, 0x3C, 0x3C, 0x3F, 0xFC, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x38, 0x3E, 0x7C, 0x3F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFC, 0x1F, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xF8, 0x1F, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x03, 0xC0, 0x19, 0x98, 0x3F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFC, 0x1D, 0xB8, 0x01, 0x80, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x0F, 0xF0, 0x1F, 0xF8, 0x3F, 0xFC, 0x3F, 0xFC, 0x1D, 0xB8, 0x01, 0x80, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x3F, 0xFC, 0x3E, 0x7C, 0x3C, 0x3C, 0x38, 0x1C, 0x38, 0x1C, 0x3C, 0x3C, 0x3E, 0x7C, 0x3F, 0xFC, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x0E, 0x70, 0x0C, 0x30, 0x08, 0x10, 0x08, 0x10, 0x0C, 0x30, 0x0E, 0x70, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x38, 0x1C, 0x31, 0x8C, 0x33, 0xCC, 0x37, 0xEC, 0x37, 0xEC, 0x33, 0xCC, 0x31, 0x8C, 0x38, 0x1C, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x70, 0x00, 0xD0, 0x01, 0x90, 0x0F, 0xC0, 0x1F, 0xE0, 0x18, 0x60, 0x18, 0x60, 0x1F, 0xE0, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x1F, 0xE0, 0x18, 0x60, 0x1F, 0xE0, 0x0F, 0xC0, 0x03, 0x00, 0x1F, 0xE0, 0x1F, 0xE0, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x03, 0x30, 0x03, 0xF0, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x0F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x06, 0x0C, 0x07, 0xFC, 0x06, 0x0C, 0x06, 0x0C, 0x06, 0x3C, 0x1E, 0x7C, 0x3E, 0x7C, 0x3E, 0x38, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x1D, 0xB8, 0x1D, 0xB8, 0x03, 0xC0, 0x1E, 0x78, 0x1E, 0x78, 0x03, 0xC0, 0x1D, 0xB8, 0x1D, 0xB8, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x1C, 0x00, 0x1F, 0x00, 0x1F, 0xE0, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xE0, 0x1F, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x38, 0x00, 0xF8, 0x07, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x07, 0xF8, 0x00, 0xF8, 0x00, 0x38, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xFC, 0x33, 0x30, 0x33, 0x30, 0x3F, 0x30, 0x1F, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x03, 0x40, 0x03, 0x00, 0x03, 0xC0, 0x06, 0xE0, 0x07, 0x60, 0x03, 0xC0, 0x00, 0xC0, 0x02, 0xC0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x30, 0x00, 0x38, 0x3F, 0xFC, 0x3F, 0xFC, 0x00, 0x38, 0x00, 0x30, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x1C, 0x00, 0x3F, 0xFC, 0x3F, 0xFC, 0x1C, 0x00, 0x0C, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x1F, 0xF8, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x18, 0x18, 0x3F, 0xFC, 0x3F, 0xFC, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x03, 0xC0, 0x03, 0xC0, 0x07, 0xE0, 0x07, 0xE0, 0x0F, 0xF0, 0x0F, 0xF0, 0x1F, 0xF8, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x1F, 0xF8, 0x0F, 0xF0, 0x0F, 0xF0, 0x07, 0xE0, 0x07, 0xE0, 0x03, 0xC0, 0x03, 0xC0, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 032 ' ' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 033 '!' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 034 '"' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x30, 0x0C, 0x30, 0x3F, 0xFC, 0x3F, 0xFC, 0x0C, 0x30, 0x0C, 0x30, 0x3F, 0xFC, 0x3F, 0xFC, 0x0C, 0x30, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 035 '#' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x07, 0xF0, 0x0F, 0xF8, 0x0D, 0x98, 0x0F, 0xC0, 0x03, 0xF0, 0x19, 0xB0, 0x1F, 0xF0, 0x0F, 0xE0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 036 '$' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x30, 0x1C, 0x70, 0x1C, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x70, 0x1C, 0x70, 0x18, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 037 '%' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xE0, 0x0C, 0x60, 0x07, 0xC0, 0x07, 0xD8, 0x0F, 0xF0, 0x1C, 0x60, 0x1C, 0x60, 0x0F, 0xF0, 0x07, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 038 '&' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 039 ''' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 040 '(' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 041 ')' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0xC0, 0x0C, 0xC0, 0x07, 0x80, 0x1F, 0xE0, 0x1F, 0xE0, 0x07, 0x80, 0x0C, 0xC0, 0x0C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 042 '*' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x0F, 0xF0, 0x0F, 0xF0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 043 '+' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 044 ',' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 045 '-' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 046 '.' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 047 '/' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xF8, 0x38, 0x7C, 0x30, 0xEC, 0x31, 0xCC, 0x33, 0x8C, 0x37, 0x0C, 0x3E, 0x1C, 0x1F, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 048 '0' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x07, 0x80, 0x07, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0xE0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 049 '1' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x3F, 0xF8, 0x30, 0x1C, 0x00, 0x1C, 0x07, 0xF8, 0x0F, 0xF0, 0x1E, 0x00, 0x1C, 0x00, 0x1F, 0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 050 '2' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x1F, 0xFC, 0x18, 0x1C, 0x00, 0x0C, 0x01, 0xFC, 0x01, 0xFC, 0x00, 0x0C, 0x18, 0x1C, 0x1F, 0xFC, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 051 '3' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x03, 0xF0, 0x07, 0x30, 0x0E, 0x30, 0x1C, 0x30, 0x3F, 0xFC, 0x3F, 0xFC, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 052 '4' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x3F, 0xF0, 0x30, 0x00, 0x30, 0x00, 0x3F, 0xF0, 0x3F, 0xF8, 0x00, 0x1C, 0x30, 0x1C, 0x3F, 0xF8, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 053 '5' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x1F, 0xF0, 0x38, 0x30, 0x38, 0x00, 0x3F, 0xF0, 0x3F, 0xF8, 0x38, 0x1C, 0x38, 0x1C, 0x1F, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 054 '6' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x1F, 0xFC, 0x18, 0x38, 0x00, 0x70, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 055 '7' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xF8, 0x38, 0x1C, 0x38, 0x1C, 0x1F, 0xF8, 0x1F, 0xF8, 0x38, 0x1C, 0x38, 0x1C, 0x1F, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 056 '8' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xF8, 0x38, 0x1C, 0x38, 0x1C, 0x1F, 0xFC, 0x0F, 0xFC, 0x00, 0x1C, 0x00, 0x1C, 0x1F, 0xF8, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 057 '9' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 058 ':' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 059 ';' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 060 '<' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 061 '=' */
	0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 062 '>' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x07, 0xF0, 0x06, 0x30, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 063 '?' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x3F, 0xF0, 0x30, 0x30, 0x31, 0xB0, 0x31, 0xF0, 0x31, 0xF0, 0x31, 0xE0, 0x30, 0x00, 0x3F, 0xF0, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 064 '@' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x0E, 0x70, 0x1C, 0x38, 0x1F, 0xF8, 0x1F, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 065 'A' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x3F, 0xF8, 0x0C, 0x18, 0x0F, 0xF8, 0x0F, 0xF8, 0x0C, 0x1C, 0x0C, 0x0C, 0x0C, 0x1C, 0x3F, 0xF8, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 066 'B' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x0F, 0xF0, 0x1C, 0x38, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x1C, 0x38, 0x0F, 0xF0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 067 'C' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x3F, 0xF8, 0x0C, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0x3F, 0xF8, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 068 'D' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x3F, 0xFC, 0x0C, 0x0C, 0x0C, 0x60, 0x0F, 0xE0, 0x0F, 0xE0, 0x0C, 0x60, 0x0C, 0x0C, 0x3F, 0xFC, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 069 'E' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x3F, 0xFC, 0x0C, 0x0C, 0x0C, 0x60, 0x0F, 0xE0, 0x0F, 0xE0, 0x0C, 0x60, 0x0C, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 070 'F' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x0F, 0xF0, 0x1C, 0x38, 0x18, 0x00, 0x18, 0x00, 0x18, 0xFC, 0x18, 0xFC, 0x1C, 0x3C, 0x0F, 0xF4, 0x07, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 071 'G' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x7C, 0x3E, 0x7C, 0x0C, 0x30, 0x0C, 0x30, 0x0F, 0xF0, 0x0F, 0xF0, 0x0C, 0x30, 0x0C, 0x30, 0x3E, 0x7C, 0x3E, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 072 'H' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 073 'I' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x03, 0xFC, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x18, 0x60, 0x18, 0x60, 0x1C, 0xE0, 0x0F, 0xC0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 074 'J' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x7C, 0x1E, 0x7C, 0x06, 0x70, 0x06, 0xE0, 0x07, 0xC0, 0x07, 0xC0, 0x06, 0xE0, 0x06, 0x70, 0x1E, 0x7C, 0x1E, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 075 'K' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x1F, 0x80, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x18, 0x1F, 0xF8, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 076 'L' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0C, 0x38, 0x1C, 0x3C, 0x3C, 0x3E, 0x7C, 0x37, 0xEC, 0x33, 0xCC, 0x31, 0x8C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 077 'M' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x1C, 0x18, 0x1E, 0x18, 0x1F, 0x18, 0x1B, 0x98, 0x19, 0xD8, 0x18, 0xF8, 0x18, 0x78, 0x18, 0x38, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 078 'N' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x0F, 0xF8, 0x1C, 0x1C, 0x18, 0x0C, 0x18, 0x0C, 0x18, 0x0C, 0x18, 0x0C, 0x1C, 0x1C, 0x0F, 0xF8, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 079 'O' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x1F, 0xF8, 0x06, 0x1C, 0x06, 0x1C, 0x07, 0xF8, 0x07, 0xF0, 0x06, 0x00, 0x06, 0x00, 0x1F, 0x80, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 080 'P' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x0F, 0xF8, 0x1C, 0x1C, 0x18, 0x0C, 0x18, 0x0C, 0x18, 0x0C, 0x19, 0x8C, 0x1C, 0xDC, 0x0F, 0xF8, 0x07, 0xF0, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 	/* 081 'Q' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x3F, 0xF0, 0x0C, 0x38, 0x0C, 0x38, 0x0F, 0xF0, 0x0F, 0xE0, 0x0C, 0xE0, 0x0C, 0x70, 0x3F, 0x3C, 0x3F, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 082 'R' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xF8, 0x38, 0x18, 0x38, 0x00, 0x1F, 0xF0, 0x0F, 0xF8, 0x00, 0x1C, 0x30, 0x1C, 0x3F, 0xF8, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 083 'S' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x3F, 0xFC, 0x31, 0x8C, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0xE0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 084 'T' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x38, 0x0F, 0xF0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 085 'U' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x38, 0x0E, 0x70, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 086 'V' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x31, 0x8C, 0x33, 0xCC, 0x37, 0xEC, 0x3E, 0x7C, 0x3C, 0x3C, 0x38, 0x1C, 0x30, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 087 'W' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0x1C, 0x70, 0x0E, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x07, 0xC0, 0x0E, 0xE0, 0x1C, 0x70, 0x38, 0x38, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 088 'X' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x0E, 0x70, 0x07, 0xE0, 0x03, 0xC0, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0xE0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 089 'Y' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x1F, 0xF8, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x1F, 0xF8, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 090 'Z' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x03, 0xC0, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 091 '[' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 092 '\' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 093 ']' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0xC0, 0x07, 0xE0, 0x0E, 0x70, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 094 '^' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 	/* 095 '_' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 096 '`' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x07, 0xF0, 0x00, 0x30, 0x0F, 0xF0, 0x1F, 0xF0, 0x18, 0x30, 0x1F, 0xF8, 0x0F, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 097 'a' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x18, 0x00, 0x1F, 0xF0, 0x1F, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0xF8, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 098 'b' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x0F, 0xF0, 0x1C, 0x38, 0x18, 0x00, 0x18, 0x00, 0x1C, 0x38, 0x0F, 0xF0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 099 'c' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x70, 0x00, 0x30, 0x1F, 0xF0, 0x3F, 0xF0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3F, 0xF8, 0x1F, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 100 'd' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x0F, 0xF0, 0x1C, 0x38, 0x1F, 0xF8, 0x1F, 0xF8, 0x1C, 0x00, 0x0F, 0xF0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 101 'e' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x0F, 0xF8, 0x0C, 0x18, 0x0C, 0x18, 0x3F, 0x80, 0x3F, 0x80, 0x0C, 0x00, 0x0C, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 102 'f' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xEC, 0x1F, 0xFC, 0x18, 0x30, 0x18, 0x30, 0x1F, 0xF0, 0x0F, 0xF0, 0x00, 0x30, 0x0F, 0xF0, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 	/* 103 'g' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0F, 0xF0, 0x0F, 0xF8, 0x0E, 0x38, 0x0C, 0x18, 0x0C, 0x18, 0x1E, 0x3C, 0x1E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 104 'h' */
	0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0x80, 0x00, 0x00, 0x07, 0x80, 0x07, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x07, 0xE0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 105 'i' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x70, 0x00, 0x00, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x18, 0x30, 0x1F, 0xF0, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 	/* 106 'j' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x1C, 0x70, 0x0C, 0xF0, 0x0D, 0xC0, 0x0F, 0x80, 0x0F, 0xC0, 0x0C, 0xE0, 0x0C, 0x70, 0x1E, 0x38, 0x1E, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 107 'k' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x03, 0xF0, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 108 'l' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x30, 0x3E, 0x78, 0x1F, 0xF8, 0x1B, 0xD8, 0x19, 0x98, 0x19, 0x98, 0x19, 0x98, 0x19, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 109 'm' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0xE0, 0x1F, 0xF0, 0x0E, 0x70, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x1E, 0x78, 0x1E, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 110 'n' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x0F, 0xF0, 0x1C, 0x38, 0x18, 0x18, 0x18, 0x18, 0x1C, 0x38, 0x0F, 0xF0, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 111 'o' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0xF8, 0x1F, 0xFC, 0x0C, 0x0C, 0x0C, 0x0C, 0x0F, 0xFC, 0x0F, 0xF8, 0x0C, 0x00, 0x1E, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 112 'p' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xEC, 0x1F, 0xFC, 0x18, 0x18, 0x18, 0x18, 0x1F, 0xF8, 0x0F, 0xF8, 0x00, 0x18, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 	/* 113 'q' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0xF0, 0x0F, 0xF8, 0x07, 0x18, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 114 'r' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x0F, 0xF8, 0x0C, 0x00, 0x0F, 0xF0, 0x07, 0xF8, 0x00, 0x18, 0x0F, 0xF8, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 115 's' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x0F, 0xC0, 0x0F, 0xC0, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x18, 0x03, 0xF8, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 116 't' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0F, 0xF8, 0x07, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 117 'u' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x18, 0x0C, 0x18, 0x0C, 0x18, 0x0C, 0x18, 0x0E, 0x38, 0x07, 0x70, 0x03, 0xE0, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 118 'v' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x19, 0x98, 0x19, 0x98, 0x1B, 0xD8, 0x1F, 0xF8, 0x1E, 0x78, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 119 'w' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x18, 0x07, 0x38, 0x03, 0xF0, 0x01, 0xE0, 0x01, 0xE0, 0x03, 0xF0, 0x07, 0x38, 0x06, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 120 'x' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0F, 0xF0, 0x07, 0xF0, 0x00, 0x30, 0x0F, 0xF0, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 	/* 121 'y' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x1F, 0xF0, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0F, 0xF8, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 122 'z' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0xE0, 0x01, 0x80, 0x01, 0x80, 0x07, 0x00, 0x07, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 123 '{' */
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 124 '|' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x70, 0x00, 0x70, 0x00, 0xC0, 0x00, 0xC0, 0x03, 0xC0, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 	/* 125 '}' */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x30, 0x07, 0xB0, 0x06, 0xF0, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 	/* 126 '~' */
};

	
FONT font_16x16 = {FONTWIDTH, FONTHEIGHT, 
			FONTNUM, font_16x16_data, FONTALIGN, 2};


// width, height, size

// char number....   data

// charnumber == 0xFF ends

int main(int argc, char *argv[])
{
	int i, j, k;
	u8 b;
	FONT *this_font;
	u8 data;
	FILE *file;
	u8 *ch_ptr;
	u8 ch_check;
	
	file = fopen("font_16x16.fnt", "w");
	
	this_font = &font_16x16;

	
	data = this_font->width;
	fwrite(&data, sizeof(u8), 1, file);
	data = this_font->height;
	fwrite(&data, sizeof(u8), 1, file);
	data = this_font->align;
	fwrite(&data, sizeof(u8), 1, file);
	
	
	for (i=0; i<128; i++)   // each char
	{
		// get a ptr to char
		ch_ptr = this_font->data + this_font->align*i;
		
		// check if it equals 0
		ch_check = 0;
		for (j=0; j<this_font->align; j++)
		{
			ch_check |= ch_ptr[j];
		}
		
		// if not.. write char number and then data
		if ( (ch_check != 0) && (i> 32) )
		{
			data = i;
			fwrite(&data, sizeof(u8), 1, file);
			
			fwrite(ch_ptr, this_font->align, 1, file);
		}
		else
		{
			printf("skipping ch %d\n", i);
		}

	}
	
	// end of file
	data = 0xFF;
	fwrite(&data, sizeof(u8), 1, file);
	
	fclose(file);
	return 0;
	
}
