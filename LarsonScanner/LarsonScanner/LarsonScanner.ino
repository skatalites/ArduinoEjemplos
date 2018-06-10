
/*
  Ejemplo 3
  LARSON SCANNER Arduino.
  @skatalites
*/

#define PRIMER_LED  5
#define ULTIMO_LED  12
#define TIEMPO_RETRASO  100
#define TIEMPO_RETRASO2  200



void setup() {
  for (int i = PRIMER_LED; i <= ULTIMO_LED; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  for (int i = PRIMER_LED; i <= ULTIMO_LED; i++) {

    if (i == 8 or i == 9) {
      digitalWrite(i, HIGH);
      delay(TIEMPO_RETRASO2);
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
      delay(TIEMPO_RETRASO);
      digitalWrite(i, LOW);
    }
  }

  for (int i = ULTIMO_LED; i >= PRIMER_LED; i--) {

    if (i == 8 or i == 9) {
      digitalWrite(i, HIGH);
      delay(TIEMPO_RETRASO2);
      digitalWrite(i, LOW);
    } else {
      digitalWrite(i, HIGH);
      delay(TIEMPO_RETRASO);
      digitalWrite(i, LOW);
    }
  }
}
