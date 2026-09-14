#include <Arduino.h>
void setup()
{
    Serial.begin(115200);
}
void loop()
{
    Serial.write("HELLO");
    delay(100);
}