#define clk     2  //Definindo o pino clock do 74HC585    
#define letch   3  //Definindo o pino letch do 74HC585
#define data    4  //Definindo o pino data  do 74HC585

void setup() {
	pinMode(clk,   OUTPUT);  // |
    pinMode(letch, OUTPUT);  // | Definindo pinos de saida
    pinMode(data,  OUTPUT);  // |
}

void loop() {
    shiftOut(data, clk, LSBFIRST, 0x66);
    attShift();
    shiftOut(data, clk, LSBFIRST, 0xD0);
    attShift();
}

void attShift() {
  digitalWrite(letch, LOW);   // |
  digitalWrite(letch, HIGH);  // | Atualizando dados
  digitalWrite(letch, LOW);   // |
  return 0;
}
