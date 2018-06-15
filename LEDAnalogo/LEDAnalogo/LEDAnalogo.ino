/*
  Ejemplo 4
  LED análogo.
  @skatalites
*/

#define PIN_LED 6
void setup() {}

void loop() {
  for (int i = 0; i < 100; i++) {
    analogWrite(PIN_LED, i);
    delay(20);
  }

  for (int i = 100; i > 0; i--) {
    analogWrite(PIN_LED, i);
    delay(20);
  }
}
