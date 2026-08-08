#include <avr/io.h>
#include "gpio.h"



int main()
{
    ConfigureGPIO();

    while(1)
    {
        ToggleGreenLED();
        ToggleRedLED();
        ToggleYellowLED();
    }

}
