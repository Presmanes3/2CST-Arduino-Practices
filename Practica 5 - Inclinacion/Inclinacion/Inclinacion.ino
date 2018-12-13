/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 5
NOMBRE PRACTICA : SENSOR INCLINACION
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#define LED_PIN 13
#define INPUT_PIN 14

int INPUT_PIN_VALUE = A0;

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Declaramos el led como salida
  pinMode(INPUT_PIN, INPUT); // Declaramos el switch como entrada
}

void loop() {
  /*Leemos el valor del pin entrada y lo almacenamos en una variable*/
  INPUT_PIN_VALUE = digitalRead(INPUT_PIN);

  /*Encendemos/Apagamos el led en funcion de lo que valga la entrada*/
  digitalWrite(LED_PIN, INPUT_PIN_VALUE);
}
