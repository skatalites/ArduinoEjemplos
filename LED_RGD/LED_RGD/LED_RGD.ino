/*
  Ejemplo 5
  LED RGD.
  @skatalites
*/

#define PIN_RED 11
#define PIN_GREEN 10
#define PIN_BLUE 9

#define DELAY 1000


void setup() {
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
}

void loop() {

  digitalWrite(PIN_GREEN,  LOW);
  digitalWrite(PIN_BLUE,   LOW);
  digitalWrite(PIN_RED,   HIGH);

  delay(DELAY);

  digitalWrite(PIN_GREEN,  LOW);
  digitalWrite(PIN_BLUE,  HIGH);
  digitalWrite(PIN_RED,    LOW);

  delay(DELAY);

  digitalWrite(PIN_GREEN, HIGH);
  digitalWrite(PIN_BLUE,   LOW);
  digitalWrite(PIN_RED,    LOW);

  delay(DELAY);

  digitalWrite(PIN_GREEN, LOW);
  digitalWrite(PIN_BLUE,  HIGH);
  digitalWrite(PIN_RED,   HIGH);

  delay(DELAY);

  digitalWrite(PIN_GREEN, HIGH);
  digitalWrite(PIN_BLUE,  HIGH);
  digitalWrite(PIN_RED,    LOW);

  delay(DELAY);

  digitalWrite(PIN_GREEN,  HIGH);
  digitalWrite(PIN_BLUE,    LOW);
  digitalWrite(PIN_RED,    HIGH);

  delay(DELAY);

  digitalWrite(PIN_GREEN,  HIGH);
  digitalWrite(PIN_BLUE,   HIGH);
  digitalWrite(PIN_RED,    HIGH);

  delay(DELAY);

  digitalWrite(PIN_GREEN,  LOW);
  digitalWrite(PIN_BLUE,   LOW);
  digitalWrite(PIN_RED,    LOW);

  delay(DELAY);
}


