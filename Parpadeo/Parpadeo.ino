/*
* Ejemplo 1
* Prende y apagar un led, el pin 13 ya tiene resistencias en Arduino.
* @skatalites
*/

int pinLed = 13;                //crea variable y define el valor de pin 13, que ya tiene resistencias en Arduino
int tiempoRetraso = 2000;       //2000 son dos segundos,


void setup() {
  pinMode(pinLed, OUTPUT);
}


void loop() {
  digitalWrite(pinLed, HIGH);   // Encender pin 13
  delay(tiempoRetraso);         // Retraso de 2 segundos
  
  digitalWrite(pinLed, LOW);    // Apagar pin 13
  delay(tiempoRetraso);         // Retraso de 2 segundos
}
