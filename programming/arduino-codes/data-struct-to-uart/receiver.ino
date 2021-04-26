#include <SoftwareSerial.h>
SoftwareSerial receiver(8, 9); //TX RX

struct Gyro_data_structure {
    int gyro_X;
    int gyro_Y;
    int gyro_Z;
};
struct Gyro_data_structure Gyro_data;
int size_gyro = sizeof(struct Gyro_data_structure);

void setup() {
    Serial.begin(9600);
    receiver.begin(9600);
}

void loop() {
    receive(&Gyro_data);
    Serial.print("Gyro_X: "); Serial.print(Gyro_data.gyro_X); Serial.print("\t");
    Serial.print("Gyro_Y: "); Serial.print(Gyro_data.gyro_Y); Serial.print("\t");
    Serial.print("Gyro_Z: "); Serial.println(Gyro_data.gyro_Z);
    delay(1000);
}

void receive (const Gyro_data_structure* table) {
  return (Serial.readBytes((char*)table, sizeof(Gyro_data_structure)) == sizeof(Gyro_data_structure));
}