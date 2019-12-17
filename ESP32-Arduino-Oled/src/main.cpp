#include <Arduino.h>
#include <SPI.h>   // for OLED display
#include <Adafruit_SSD1306.h>  // for display graphics

#define LED 26
#define DELAY 500

#define OLED_MOSI  23
#define OLED_CLK   18
#define OLED_DC    4
#define OLED_CS    5
#define OLED_RESET 2
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

void oledInit(){
  display.begin(SSD1306_SWITCHCAPVCC);
  display.clearDisplay();
  display.setTextColor(WHITE);
  //display.startscrollright(0x00, 0x0F); // You can uncomment this line to scroll your text on oled                  
  display.setTextSize(2);
  display.setCursor(0,5);
  display.print(" Blink!!! "); //This will Display Clock on OLED for 3 seconds


  //display.drawLine(0, 0, display.width()-1, 0, WHITE);
  //void drawLine( x0,  y0,  x1,  y1, color);
  display.drawRect(0,0,display.width(),display.height(), WHITE);
  
  display.display();
}


void setup() {
  pinMode(LED, OUTPUT);
  oledInit();
  delay(1000);
}

void loop() {
  digitalWrite(LED, HIGH);
  display.clearDisplay();
  display.fillCircle(100,16,5,WHITE);
  display.display();
  delay(DELAY);
  digitalWrite(LED, LOW);
  display.clearDisplay();
  display.drawCircle(100,16,5,WHITE);
  display.display();
  delay(DELAY);
}

