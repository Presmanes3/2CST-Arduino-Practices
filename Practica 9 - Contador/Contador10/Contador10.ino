/* PRACTICAS ARDUINO PROYECTO                                       13/12/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 9.2
NOMBRE PRACTICA : CONTADOR HASTA 10
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/
#include <Arduino.h>
#define LED 13  // Definimos el LED como 13
#define BOTON 7 // Definimos el Botono como 7

/* Inicializamos las variables valor y prev valor como uint8_t ya que
 solo pueden tener estado alto o bajo y como el contador solo puede llegar a 10
 tambien bastara un byte para represetnarlo*/
uint8_t valor = 0;
uint8_t prev_valor = 0;
uint8_t contador = 0;

void setup() {
  pinMode(LED, OUTPUT);  // Pin 13 como salida
  pinMode(BOTON, INPUT); // Pin 7 como entrada

  Serial.begin(9600); // Inicializamos el Serial a 9600 baudios
}
void loop() {
  valor = digitalRead(BOTON); // Almacenamos la lectura del boton
  digitalWrite(LED, valor);   // Representamos dicha lectura graficamente
  if (valor != prev_valor) {  // si el valor ha cambiado
    if (valor == 1) {         // si el valor es alto
      contador++;             // suma uno al contador
      char buff[50];
      snprintf(buff, 50, "Contador : %d",
               contador);   // le damos formato a un char
      Serial.println(buff); // mostramos el char pro pantalla
      if (contador == 10) { // si el contador vale 10
        contador = 0;       // lo reseteamos
      }
    }
  }
  prev_valor = valor; // reseteamos el valor a comparar
}
