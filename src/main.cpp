#include <Arduino.h>

const int ldrPin = 34; // Chân GPIO34 

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Bat dau doc gia tri tu LDR...");
}

void loop() {
  // Đọc giá trị từ LDR (0 - 4095)
  int ldrValue = analogRead(ldrPin);
  
  Serial.print("Gia tri LDR: ");
  Serial.println(ldrValue);
  
  delay(500);
}