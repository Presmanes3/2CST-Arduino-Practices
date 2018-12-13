/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 1
NOMBRE PRACTICA : BLINK
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT); // Definimos el led como salida
}

void loop() {
  digitalWrite(LED_PIN, 1); // Encendemos el led
  delay(200);               // Nos esperamos 200ms
  digitalWrite(LED_PIN, 0); // Encendemos el led
  delay(200);               // Nos esperamos 200ms
}
