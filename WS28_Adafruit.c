#include "WS28_Adafruit.h"

void SetColor_CMYK(unsigned char i_C, unsigned char i_M, unsigned char i_Y, unsigned char i_K){
    leds[2] = 255 * (1 - i_Y ) * (1 - i_K);
    leds[1] = 255 * (1 - i_M ) * (1 - i_K);
    leds[0] = 255 * (1 - i_C ) * (1 - i_K);
}
// void SetColor_HSL(unsigned char i_H, unsigned char i_S, unsigned char i_L){

// }
// void SetColor_HSV(unsigned char i_H, unsigned char i_S, unsigned char i_V){

// }
void SetColor_RGB(unsigned char i_R, unsigned char i_G, unsigned char i_B)
{
    leds[2] = i_B;
    leds[1] = i_G;
    leds[0] = i_R;
}

void Show()
{
    for (unsigned int PixelColor = 0; PixelColor <= 2; PixelColor++)
    {
        for (unsigned char PixelByte = 0; PixelByte <= 7; PixelByte++)
        {
            if ((leds[PixelColor] & (1 << PixelByte)) != 0)
            {
               WS2812_H
            }
            else
            {
               WS2812_L
            }
        }
    }
}


void delay_1s()
{
    for (unsigned char i = 0; i < 255; i++)
    {
        for (unsigned char j = 0; j < 255; j++)
        {
            for (unsigned char k = 0; k < 22; k++)
            {
                asm("NOP");
            }
        }
    }
}