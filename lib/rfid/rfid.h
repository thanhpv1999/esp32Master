#ifndef RFID_h
#define RFID_h

#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>
#include <Preferences.h>

#define SS_PIN 5
#define RST_PIN 2

void setupRfid_init();
void checkRfid_loop();

#endif