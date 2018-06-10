/*
* Ejemplo 2
* Permite validar comunicación Ardiono y computador.
* @skatalites
* 
*/

int VELOCIDAD_BXS = 9600;       //9600 Bits x segundo

void setup() {
Serial.begin(VELOCIDAD_BXS);
}

void loop() {
  Serial.println("Hola Mundo Serial");
}
