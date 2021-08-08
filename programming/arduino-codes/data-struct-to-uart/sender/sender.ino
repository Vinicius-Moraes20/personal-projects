#include <SoftwareSerial.h>
SoftwareSerial sender(8, 9); //TX RX

struct Gyro_data_structure {
    int gyro_X;
    int gyro_Y;
    int gyro_Z;
};
struct Gyro_data_structure Gyro_data;
int size_gyro = sizeof(struct Gyro_data_structure);

void setup() {
    Serial.begin(9600);
    sender.begin(9600);
    Gyro_data.gyro_X = 20;
    Gyro_data.gyro_Y = 90;
    Gyro_data.gyro_Z = 40;
}

void loop() {
    Gyro_data.gyro_X++;
    Gyro_data.gyro_Y++;
    Gyro_data.gyro_Z++;
    send(&Gyro_data);
    sender.println();
    Serial.println("DADOS ENVIADOS");
    delay(1000);
}

void send (const Gyro_data_structure* table) {
  sender.write((const char*)table, size_gyro);  // 2 bytes.
}