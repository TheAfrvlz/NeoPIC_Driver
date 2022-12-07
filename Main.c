#include "xc.h"
#include "Configuracion.h"
#include "pic18f4550.h"
#include <stdio.h>
#include <stdlib.h>
#include "WS28_Adafruit.h"

int main(int argc, char **argv){

    TRISD = 0x00;
    PORTD = 0x00;

    while (1)
    {
        // SetColor_CMYK(1,1,1);
        // SetColor_HSL(1,1,1);
        // SetColor_HSV(1,1,1);       
        SetColor_RGB(56,161,168);
        Show();
        delay_1s();
        // SetColor(0, 0xff, 0);
        // Show();
        // delay();
        // SetColor(0, 0, 0xff);
        // Show();
        // delay();
    }
    return (EXIT_SUCCESS);
}
