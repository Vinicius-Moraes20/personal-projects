#include <Arduino_FreeRTOS.h>

#define led_1 2
#define led_2 3

int blinks_1, blinks_2;

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
  digitalWrite(led_1, !digitalRead(led_1));
  if(digitalRead(led_1) == HIGH){
    blinks_1++;
    Serial.print("PISCADAS LED 1: "); Serial.println(blinks_1);
  }
}

void xTaskLed_2(void *pvParameters){
  digitalWrite(led_2, !digitalRead(led_2));
  if(digitalRead(led_2) == HIGH){
    blinks_1++;
    Serial.print("PISCADAS LED 2: "); Serial.println(blinks_2);
  }
}