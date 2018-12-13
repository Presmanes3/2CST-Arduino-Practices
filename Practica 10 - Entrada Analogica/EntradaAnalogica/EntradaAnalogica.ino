/* PRACTICAS ARDUINO PROYECTO                                       13/12/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 10
NOMBRE PRACTICA : ENTRADA ANALOGICA
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/
#include <Arduino.h>
#define POT A5 // Definimos el POT como 5

uint16_t valor = 0; // la variable valor es de 2bytes ya que la entrada
                    // analogica puede leer entre 1024 valores

void setup() {
  Serial.begin(9600); // Inicializamos el Serial a 9600 baudios
}

void loop() {
  valor = analogRead(
      POT); // Almacenamos el valor del potenciometro en la variable valor
  char buff[50];
  snprintf(buff, 50, "Valor POT : %d", valor); // Damos formato a un char array
  Serial.println(buff);                        // Mostramos el valor por serial
  delay(100); // Esperamos 100ms para volver a empezar
}
