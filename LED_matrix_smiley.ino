#include <LedControl.h>

// Pins for MAX7219
#define DIN_PIN 11
#define CLK_PIN 13
#define CS_PIN 10

// Create an instance of LedControl (DataIn, Clock, ChipSelect, number of devices)
LedControl lc = LedControl(DIN_PIN, CLK_PIN, CS_PIN, 1);

void setup() {
  // Initialize the display
  lc.shutdown(0, false);       // Wake up the MAX7219
  lc.setIntensity(0, 8);       // Set brightness level (0 is min, 15 is max)
  lc.clearDisplay(0);          // Clear the display
}

void loop() {
  // Define an 8x8 pattern (A simple smiley face)
  byte smiley[8] = {
    B00111100,
    B01000010,
    B10100101,
    B10000001,
    B10100101,
    B10011001,
    B01000010,
    B00111100
  };
  
  // Display the pattern on the LED matrix
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, smiley[i]);
  }
  
  delay(1000);  // Hold for a second

  lc.clearDisplay(0);  // Clear the display
  delay(1000);
}
