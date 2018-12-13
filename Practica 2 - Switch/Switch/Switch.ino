/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 2
NOMBRE PRACTICA : SWITCH
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#define LED_PIN 13
#define INPUT_PIN 5

bool INPUT_PIN_VALUE = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Declaramos el led como salida
  pinMode(INPUT_PIN, INPUT); // Declaramos el switch como entrada
}

void loop() {
  if (digitalRead(INPUT_PIN_VALUE)) { // Si lo que leemos es 1
    digitalWrite(LED_PIN, 0);         // Apaga el led
  } else {                            // Si no es 1 (es 0)
    digitalWrite(LED_PIN, 0);         // Apaga el led
    delay(200);                       // Esperamos 200ms
    digitalWrite(LED_PIN, 1);         // Enciende el led
    delay(200);                       // Esperamos 200ms
  }
}
