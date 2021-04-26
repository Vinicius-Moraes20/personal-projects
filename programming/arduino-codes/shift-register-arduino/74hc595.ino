#define clk     2  //Definindo o pino clock do 74HC585    
#define data    3  //Definindo o pino data  do 74HC585
#define letch   4  //Definindo o pino letch do 74HC585

void setup() {
  pinMode(clk,   OUTPUT);  // |
  pinMode(letch, OUTPUT);  // | Definindo pinos de saida
  pinMode(data,  OUTPUT);  // |
}

void loop() {
    shiftOut(data, clk, LSBFIRST, 0x3C);
    attShift();
    shiftOut(data, clk, LSBFIRST, 0xC3);
    attShift();
}

void attShift() {
  digitalWrite(letch, LOW);   // |
  digitalWrite(letch, HIGH);  // | Atualizando dados
  digitalWrite(letch, LOW);   // |
  delay(1000);
  return 0;
}
