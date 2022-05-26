#include <SK6812.h>

const int NUM_LEDS=128; // NUMBER OF LEDS IN SYSTEM
const int OUTPUT_PIN=4; // PIN NUMBER ON ARDUINO WHERE LEDS ARE
const RGBW RED = {255, 0, 0, 50};
const RGBW GREEN = {0, 255, 0, 50};
const RGBW BLUE = {0, 0, 255, 50};
SK6812 LED(NUM_LEDS);

void setup() {
  LED.set_output(OUTPUT_PIN);
  setAllLedsColor(RED);
  delay(1000);
  setAllLedsColor(GREEN);
  delay(1000);
  setAllLedsColor(BLUE);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void setAllLedsColor(RGBW color) {
  for(int i=0;i<NUM_LEDS;i++) {
    LED.set_rgbw(i, color);  
  }
  LED.sync();
}
