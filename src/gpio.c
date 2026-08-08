#include <util/delay.h>
#include "gpio.h"

void ConfigureGPIO(void)
{
    /* configuring the ports as output */
    DDRD |= YELLOW_LED;
    DDRD |= RED_LED;
    DDRD |= GREEN_LED;

    /* configuring the port as input */
    DDRD &= ~(BUTTON);
}

void ToggleYellowLED(void)
{
    PORTD |= YELLOW_LED;
    _delay_ms(300);
    PORTD &= ~ YELLOW_LED;
    _delay_ms(300);
}

void ToggleRedLED(void)
{
    PORTD |= RED_LED;
    _delay_ms(300);
    PORTD &= ~ RED_LED;
    _delay_ms(300);
}

void ToggleGreenLED(void)
{
    PORTD |= GREEN_LED;
    _delay_ms(300);
    PORTD &= ~ GREEN_LED;
    _delay_ms(300);
}

void RedOn(void)
{
    PORTD |= RED_LED;
}

void YellowOn(void)
{
    PORTD |= YELLOW_LED;
}

void GreenOn(void)
{
    PORTD |= GREEN_LED;
}

void RedOff(void)
{
    PORTD &= ~RED_LED;
}

void YellowOff(void)
{
    PORTD &= ~YELLOW_LED;
}

void GreenOff(void)
{
    PORTD &= ~GREEN_LED;
}

/* reading functions
 * return 0 if the pin is low
 * return 1 if the pin is high
*/
uint8_t ReadButton(void)
{
    if(PINB & BUTTON)
    {
        _delay_ms(20);

        if(PINB & BUTTON)
        {
            return 1;
        }
    }

    return 0;
}

uint8_t ReadButton2(void)
{
    if(PIND & BUTTON)
    {
        return 1;
    }

    return 0;
}