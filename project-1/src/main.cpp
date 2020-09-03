#include <Arduino.h>
#include <blinkdelay.h>

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(BLINK_DELAY);

    digitalWrite(LED_BUILTIN, LOW);
    delay(BLINK_DELAY);
}
