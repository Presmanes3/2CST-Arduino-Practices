/* PRACTICAS ARDUINO PROYECTO                                       25/10/2018

NOMBRE : JAVIER
APELLIDOS : PRESMANES CARDAMA
NUMERO PRACTICA : 8
NOMBRE PRACTICA : ESTRELLA FUGAZ
CURSO : 2º CICLO SUPERIOR EN SISTEMAS DE TELECOMUNICACIONES E INFORMATICOS
CORREO : presmanes3@gmail.com

*/

#define TAIL_LENGTH 4
#define LINE_SIZE 12
#define TIMER 100

uint8_t LED[LINE_SIZE] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void setup() {
  for (uint8_t NUMBER = 0; NUMBER < 12;
       NUMBER++) {                // Para cada numero entre 0 y 5
    pinMode(LED[NUMBER], OUTPUT); // Declaramos el pin que ocupe ese numero en
                                  // el array como salidas
  }
}

void loop() {
  uint8_t TAIL_COUNTER = TAIL_LENGTH; // Declaramos una variable auxiliar
  /*Para cada led de 0 a (LINE_SIZE - 1)*/
  for (uint8_t NUMBER = 0; NUMBER < LINE_SIZE; NUMBER++) {
    digitalWrite(LED[NUMBER], 1); // Encendemos el led
    delay(TIMER);                 // Esperamos el tiempo que valga TIMER
    if (TAIL_COUNTER == 0) {      // Si el contador de la cola es 0
      /* Enpieza a apagar el ultimo led de la cola */
      digitalWrite(LED[NUMBER - TAIL_LENGTH], 0);
    } else {                  // Si no
      if (TAIL_COUNTER > 0) { // Si la cola es mayor que 0
        TAIL_COUNTER--;       // Restale uno
      }
    }
  }
  /*Para cada led de 0 a (LINE_SIZE - 1)*/
  for (uint8_t INDEX = LINE_SIZE - TAIL_LENGTH; INDEX < LINE_SIZE; INDEX++) {
    digitalWrite(LED[INDEX], 0); // Apaga el led
    delay(TIMER);                 // Esperamos el tiempo que valga TIMER
  }
}
