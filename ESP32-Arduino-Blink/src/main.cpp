#include <Arduino.h>
#include <SPI.h>   // for OLED display
#define LED 26
<<<<<<< HEAD
#define DELAY 500
=======
#define DELAY 360
>>>>>>> 5284a90a7dd2a4daf43f8687e2819e068a9495fb

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(DELAY);
  digitalWrite(LED, LOW);
  delay(DELAY);
}