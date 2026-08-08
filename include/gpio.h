#ifndef GPIO_H
#define GPIO_H

#include <avr/io.h>
#include<stdint.h>

/* leds and buttons */
#define YELLOW_LED (1 << 5)  //PD5
#define RED_LED    (1 << 6)  //PD6
#define GREEN_LED  (1 << 7)  //PD4
#define BUTTON     (1 << 4)  //PB3


void ConfigureGPIO(void);
void ToggleYellowLED(void);
void ToggleRedLED(void);
void ToggleGreenLED(void);

/* functions for the state machine */
void GreenOn(void);
void YellowOn(void);
void RedOn(void);
void GreenOff(void);
void YellowOff(void);
void RedOff(void);

//reading functions
uint8_t ReadButton(void);
uint8_t ReadButton2(void);


#endif // GPIO_H