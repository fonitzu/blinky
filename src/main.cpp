#include <Arduino.h>

#define LED_GREEN   6
#define LED_ROT	    8
#define LED_3	      12
#define LED_4	      41

#define PERIOD		500

void setup()
{
	pinMode( LED_ROT, OUTPUT );
	pinMode( LED_GREEN, OUTPUT );
}

void loop()
{
	digitalWrite( LED_GREEN, LOW );
	digitalWrite( LED_ROT, HIGH );
	delay( PERIOD );
	digitalWrite( LED_GREEN, HIGH );
	digitalWrite( LED_ROT, LOW );
	delay( PERIOD );
}