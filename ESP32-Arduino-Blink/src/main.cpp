#include <Arduino.h>
#include <SPI.h>   // for OLED display
#define LED 26
#define DELAY 500

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(DELAY);
  digitalWrite(LED, LOW);
  delay(DELAY);
}