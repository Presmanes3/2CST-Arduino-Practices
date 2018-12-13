/* PRACTICAS ARDUINO PROYECTO                                       13/12/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 12
NOMBRE PRACTICA : CONSTRUCCION DE UN INDICADOR DE NIVEL (VUMETRO)
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#include <Arduino.h>

#define LED0 8 // Definimos el LED0 como 8
#define LED1 7 // Definimos el LED1 como 8
#define LED2 6 // Definimos el LED2 como 8
#define POT A1 // Definimos el POT como A1

void turn_off() {
  // Funcion auxiliar que apaga todos los leds
  digitalWrite(LED0, LOW);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void setup() {
  pinMode(LED0, OUTPUT); // Definimos los LED como salidas
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  turn_off();
}

void loop() {
  uint16_t valor; // Creamos la variable auxiliar de 16 bits para leer el POT
  valor = analogRead(POT); // Leemos el POT
  turn_off();              // Apagamos los leds
  if (valor > 256)
    // Si el valor es superior a 256 encendemos el primer led
    digitalWrite(LED0, HIGH);
  if (valor >= 512)
    // Si el valor es superior a 512 tambien encendemos el segundo
    digitalWrite(LED1, HIGH);
  if (valor >= 768)
    // Si el valor es superior a 768 encendemos tambien el ultimo
    digitalWrite(LED2, HIGH);
}
