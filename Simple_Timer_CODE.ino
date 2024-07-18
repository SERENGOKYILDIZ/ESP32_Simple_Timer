#include <SimpleTimer.h>

const int ledPin = 15;
SimpleTimer timer;

//For timer
void toggleLed()
{
  digitalWrite(ledPin, !digitalRead(ledPin));
}
void setup() {
  pinMode(ledPin, OUTPUT);
  timer.setInterval(2000, toggleLed);
}

void loop() {
  timer.run();
}
