#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int echoPin = 8;
const int trigPin = 9;
const int greenLED = 7;
const int buzzerPin = 6;
const int redLED = 13;
const int yellowLED = 10;
unsigned long previousTime = 0;
float duration = 0;

void setup() {
  Serial.begin(9600);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(redLED,OUTPUT);
pinMode(yellowLED,OUTPUT);
pinMode(buzzerPin,OUTPUT);
  lcd.begin(16, 2);
  // lcd.print("GOod Morning!!!");


}

void loop() {
unsigned long currentTime = millis();
if(currentTime - previousTime >= 500) {
  previousTime = currentTime;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin,HIGH,30000);
float distanceCm = duration * 0.0343 / 2;

lcd.setCursor(0,0);
lcd.print("Distance in cms: ");

lcd.setCursor(0,1);
lcd.print(distanceCm);

if(distanceCm < 10){
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,HIGH);
   digitalWrite(yellowLED,LOW);
  tone(buzzerPin, 1000); // Generate a 1kHz tone

} else if(distanceCm > 10 && distanceCm < 20) {
   digitalWrite(greenLED,LOW);
   digitalWrite(redLED,LOW);
  digitalWrite(yellowLED,HIGH);
  
  tone(buzzerPin, 1000);
delay(300);
noTone(buzzerPin);
delay(300);
}

 else {
    digitalWrite(greenLED,HIGH);
   digitalWrite(redLED,LOW);
    digitalWrite(yellowLED,LOW);
   noTone(buzzerPin);
   
}

}

}
