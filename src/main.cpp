/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include "config.h"
#include <blinker.h>

void _setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void _loop()
{
  blink(1000);
}

#ifndef __USE_ARDUINO_IDE__

void setup()
{
  _setup();
}

void loop()
{
  _loop();
}
#endif
