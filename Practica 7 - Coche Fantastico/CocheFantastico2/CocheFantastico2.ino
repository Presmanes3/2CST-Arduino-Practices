/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 7.2
NOMBRE PRACTICA : COCHE FANTASTICO 2
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/
#define TIMER 100

int LED[6] = {2, 3, 4, 5, 6, 7};

void setup() {
  for (uint8_t NUMBER = 0; NUMBER < 6;
       NUMBER++) {                // Para cada numero entre 0 y 5
    pinMode(LED[NUMBER], OUTPUT); // Declaramos el pin que ocupe ese numero en
                                  // el array como salidas
  }
  digitalWrite(LED[0],1 );
}

void loop() {
  for (uint8_t NUMBER = 0; NUMBER < 6; NUMBER++) { // Desde el 0 hasta el 5
    digitalWrite(LED[NUMBER], 1); // Enciende el led de indice NUMBER
    delay(TIMER);                 // Esperamos el tiempo que valga TIMER
    digitalWrite(LED[NUMBER], 0); // Apaga el led de indice NUMBER
    delay(TIMER);                 // Esperamos el tiempo que valga TIMER
  }

  for (uint8_t NUMBER = 5; NUMBER > 0; NUMBER--) {
    digitalWrite(LED[NUMBER], 1); // Enciende el led de indice NUMBER
    delay(TIMER);                 // Esperamos el tiempo que valga TIMER
    digitalWrite(LED[NUMBER], 0); // Apaga el led de indice NUMBER
    delay(TIMER);                 // Esperamos el tiempo que valga TIMER
  }
}
