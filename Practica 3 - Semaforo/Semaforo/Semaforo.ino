/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 3
NOMBRE PRACTICA : SEMAFORO
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#define RED_LED 2
#define GREEN_LED 3
#define YELLOW_LED 4

void setup() {
  pinMode(RED_LED, OUTPUT);    // Definimos el led rojo como salida
  pinMode(GREEN_LED, OUTPUT);  // Definimos el led verde como salida
  pinMode(YELLOW_LED, OUTPUT); // Definimos el led amarillo como salida
}

void loop() {
  digitalWrite(RED_LED, 1);    // Encendemos el rojo
  delay(500);                  // Esperamos 200ms
  digitalWrite(RED_LED, 0);    // Apagamos el rojo
  digitalWrite(GREEN_LED, 1);  // Encendemos el verde
  delay(500);                  // Esperamos 200ms
  digitalWrite(GREEN_LED, 0);  // Apagamos el verde
  digitalWrite(YELLOW_LED, 1); // Encendemos el amarillo
  delay(500);                  // Esperamos 200ms
  digitalWrite(YELLOW_LED, 0); // Apagamos el amarillo
}
