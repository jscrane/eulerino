#include <SPI.h>
#include <Adafruit_GFX.h>
#include <TFT_eSPI.h>

#include "euler.h"

TFT_eSPI tft;

void setup() {
	Serial.begin(115200);

	tft.init();
	tft.setTextColor(TFT_WHITE, TFT_BLACK);
	tft.setCursor(0, 0);
	tft.setRotation(2);
	tft.fillScreen(TFT_BLACK);
	tft.println("Project Euler #" NUMBER);
	tft.println();
	long start = millis();

	long answer = EULER();

	long end = millis();
	tft.println(answer);
	tft.print(end - start);
	tft.println(" ms");
}

void loop() {
}
