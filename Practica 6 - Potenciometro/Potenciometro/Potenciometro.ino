/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 6
NOMBRE PRACTICA : SEÑAL ANALOGICA CON POTENCIOMETRO
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#define POT_PIN 0
#define LED_PIN 13

int POT_VALUE = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT); // Declaramos el led como salida
  pinMode(POT_PIN, INPUT);  // Declaramos el pin del potenciometro como entrada
}

void loop() {
  Serial.println(POT_VALUE);
  POT_VALUE = analogRead(POT_PIN); // Leemos la tension del potenciometro
  digitalWrite(LED_PIN, 1);        // Encendemos el led
  delay(POT_VALUE / 2); // Esperamos en funcion de lo que valga el potenciometro
  digitalWrite(LED_PIN, 0); // Apagamos el led
  delay(POT_VALUE / 2); // Esperamos en funcion de lo que valga el potenciometro
}
