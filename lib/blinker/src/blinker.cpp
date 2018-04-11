#include "blinker.h"

void blink(int t)
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(t);
    digitalWrite(LED_BUILTIN, LOW);
    delay(t);
}
