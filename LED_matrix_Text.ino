#include <MD_Parola.h>
#include <MD_MAX72XX.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 1  // Number of 8x8 matrices
#define CS_PIN 10  // Pin connected to CS of MAX7219

MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  P.begin();  // Initialize the display
  P.setIntensity(8);  // Set brightness (0-15)
  P.displayText("HELLO", PA_CENTER, 100, 1000, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

void loop() {
  if (P.displayAnimate()) {
    P.displayReset();  // Scroll the text again
  }
}
