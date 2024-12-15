#include <Arduino.h>
#include <rfid.h>
#include <mqtt.h>

void setup()
{
    Serial.begin(9600);
    // setup_mqtt();
    setupRfid_init();
}

void loop()
{
    checkRfid_loop();
    // loop_mqtt();
}