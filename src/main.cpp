#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Inicio del parpadeo del LED");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  Serial.println("ON");
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.println("OFF");
}