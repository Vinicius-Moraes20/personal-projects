#include <Arduino_FreeRTOS.h>

#define led_1 2
#define led_2 3

void setup() {
  Serial.begin(9600);

  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);

  xTaskCreate(
    xTaskLed_1,   
    "xTaskLed_1", 
    200,
    NULL,
    1,
    NULL
  );

  xTaskCreate(
    xTaskLed_2,   
    "xTaskLed_2", 
    200,
    NULL,
    1,
    NULL
  );
  
}

void loop() {}

void xTaskLed_1(void *pvParameters){
  digitalWrite(led_1, HIGH);
  delay(1000);
  digitalWrite(led_1, LOW);
  delay(1000);
}

void xTaskLed_2(void *pvParameters){
  digitalWrite(led_2, HIGH);
  delay(1000);
  digitalWrite(led_2, LOW);
  delay(1000);
}