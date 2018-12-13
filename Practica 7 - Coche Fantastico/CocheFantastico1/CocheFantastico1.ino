/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 7.1
NOMBRE PRACTICA : COCHE FANTASTICO 1
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#define LED_0 2
#define LED_1 3
#define LED_2 4
#define LED_3 5
#define LED_4 6
#define LED_5 7
#define TIMER 100

void setup() {
  for (uint8_t PIN = 2; PIN < 8; PIN++) { // Por cada pin entre el 2 y el 7
    pinMode(PIN, OUTPUT);                 // Declaramos el pin como salida
  }
}

void loop() {
  digitalWrite(LED_0, 1); // Encendemos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_0, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_1, 1); // Encendemos el led 1
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_1, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_2, 1); // Encendemos el led 2
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_2, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_3, 1); // Encendemos el led 3
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_3, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_4, 1); // Encendemos el led 4
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_4, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_5, 1); // Encendemos el led 5
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_5, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_4, 1); // Encendemos el led 4
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_4, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_3, 1); // Encendemos el led 3
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_3, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_2, 1); // Encendemos el led 2
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_2, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER

  digitalWrite(LED_1, 1); // Encendemos el led 1
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
  digitalWrite(LED_1, 0); // Apagamos el led 0
  delay(TIMER);           // Esperamos el tiempo que valga la variable TIMER
}
