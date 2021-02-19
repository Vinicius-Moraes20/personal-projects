#include <Arduino_FreeRTOS.h>

#define btn             3
#define potencioemtro   A1

void setup() {
    pinMode(btn, INPUT);
    pinMode(potencioemtro, INPUT);

    Serial.begin(9600);

	xTaskCreate(xDigitalRead, "xDigitalRead", 200, NULL, 1, NULL);
    xTaskCreate(xAnalogRead,  "xAnalogRead" , 200, NULL, 1, NULL);
}

void loop() {}

void xDigitalRaad(void *pvParameters) {

}

void xAnalogRead(void *pvParameters) {
    
}
