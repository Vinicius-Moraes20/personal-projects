struct data1 {
    int  ch_00;         //Channel 0: analog data
    int  ch_01;         //Channel 1: analog data
    int  ch_02;         //Channel 2: analog data
    int  ch_03;         //Channel 3: analog data
    int  ch_04;         //Channel 4: analog data
    bool ch_05;         //Channel 5: digital data
    bool ch_06;         //Channel 6: digital data
    bool ch_07;         //Channel 7: digital data
    bool ch_08;         //Channel 8: digital data
};

struct data1 controll_received = {48, 49, 50, 120, 212, HIGH, LOW, LOW, HIGH};
int size_data = sizeof(struct data1);

void setup() {
  Serial.begin(9600);
}

void loop() {
  send(&controll_received);
  Serial.println();
  delay(1000);
}

void send(const data1* table) {
  Serial.write((const char*)table, size_data);
}

bool receive(data1* table) {
  return (Serial.readBytes((char*)table, sizeof(data1)) == sizeof(data1));
}