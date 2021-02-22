#include <shift_register.h>

shift_register registrador(2, 4, 3); //CLK, LETCH, DATA

void setup() {
  

}

void loop() {
  registrador.register_out(0xC3);
  delay(500);
  registrador.register_out(0x3C);
  delay(500);

}
