/* PRACTICAS ARDUINO PROYECTO                                       13/12/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 11
NOMBRE PRACTICA : SIMULACION LUZ VELA
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#include "Arduino.h"

#define LED 9 // Definimos el LED como 9

uint8_t valor = 0; // Inicializamos valor como 1 byte a 0
uint8_t delay = 0; // Inicializamos delay como 1 byte a 0

void setup() {
  pinMode(LED, OUTPUT); // Definimos el pin LED como salida
}

void loop() {
  valor = random(100, 255); // Asignamos una luminosidad entre 100 y 255
  analogWrite(LED, valor);  // Mostramos esa luminosidad
  delay = random(50, 150);  // Asignamos un tiempo de espera aleatorio
  delay(delay);             // Esperamos
}
