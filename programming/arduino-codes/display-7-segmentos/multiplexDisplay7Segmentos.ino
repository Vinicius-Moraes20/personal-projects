//         A          Display de 7 segmentos multiplexado por um CI 74CH595
//       _ _ _        Autor: Tec. Vinicius Moraes
//      |     |       Data de Publicação: Fevereiro de 2021
//   F  |_ _ _|  B    Esquematico de exemplo em: https://github.com/Vinicius-Moraes20/personal-projects/tree/main/projetos-isis/display-7-segmentos
//      |  G  |       Biblioteca Utilizada:      https://github.com/Vinicius-Moraes20/personal-projects/tree/main/arduino-libraries/shift_register
//   E  |_ _ _|  C
//
//         D

#include <shift_register.h>

shift_register disp(2, 4, 3);

//Numeros:           '0'   '1'   '2'   '3'   '4'   '5'   '6'   '7'   '8'   '9'
int segmento[10] = {0xfc, 0x60, 0xda, 0xf2, 0x66, 0xb6, 0xbe, 0xE0, 0xfe, 0xf6};
int count, ms;

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  ms = millis();
}

void loop() {
  if(count > 99) count = 0;
  if ((millis() - ms) < 200) {
    digitalWrite(5, HIGH);
    disp.register_out(segmento[count / 10]);
    digitalWrite(5, LOW);

    digitalWrite(6, HIGH);
    disp.register_out(segmento[count % 10]);
    digitalWrite(6, LOW);
  } else {
    ms = millis();
    count++;
  } 
}
