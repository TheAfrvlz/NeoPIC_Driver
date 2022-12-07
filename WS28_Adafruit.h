/* 
 * File:   WS28_Adafruit.h
 * Author: Jvele
 *
 * Created on 6 de diciembre de 2022, 06:05 PM
 */

#ifndef WS28_ADAFRUIT_H
#define	WS28_ADAFRUIT_H

#include "pic18f4550.h"

#define T1H         \
    {               \
        asm("NOP"); \
        asm("NOP"); \
        asm("NOP"); \
        asm("NOP"); \
        asm("NOP"); \
        asm("NOP"); \
    }
#define T0H         \
    {               \
        asm("NOP"); \
        asm("NOP"); \
        asm("NOP"); \
    }

#define T0L T1H
#define T1L T0H

#define WS2812_H           \
    {                      \
        PORTD = 0x01u;     \
        T1H                \
            PORTD = 0x00u; \
        T0H                \
    }

#define WS2812_L           \
    {                      \
        PORTD = 0x01u;     \
        T1L                \
            PORTD = 0x00u; \
        T0L                \
    }

unsigned char leds[3];

// void SetColor_CMYK(unsigned char i_C, unsigned char i_M, unsigned char i_Y, unsigned char i_K);
// void SetColor_HSL(unsigned char i_H, unsigned char i_S, unsigned char i_L);
// void SetColor_HSV(unsigned char i_H, unsigned char i_S, unsigned char i_V);
void SetColor_RGB(unsigned char i_R, unsigned char i_G, unsigned char i_B);
void Show();
void delay_1s();
void clear();

#endif	/* WS28_ADAFRUIT_H */

