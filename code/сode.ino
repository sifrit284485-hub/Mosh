#include "Servo.h"
Servo servo;

void setup() {
Serial.begin(9600);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(6,INPUT);
servo.attach(A2);
pinMode(A1,INPUT);

servo.write(80);//otkryl zaxvat
delay(400);
digitalWrite(8,HIGH);//napravlenie na obekt
delay(240);
digitalWrite(10,HIGH);
delay(200);
digitalWrite(8,LOW);
digitalWrite(10,LOW);//doexal do obekta
delay(1000);
servo.write(0);//vzyal obekt
delay(1000);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//doexal do obekta
delay(340);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//doexal do obekta

digitalWrite(10,HIGH);//povernul po napravleniu k lunke
delay(290);
digitalWrite(8,HIGH);
delay(300);//doexal do lunki
digitalWrite(8,LOW);
digitalWrite(10,LOW);
delay(1200);
servo.write(60);//otpustil
delay(1300);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//nazad otyexal
delay(315);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//nazad

digitalWrite(10,HIGH);
digitalWrite(9,HIGH);//povorot do cleduiuhei lunki
delay(332);
digitalWrite(9,LOW);
digitalWrite(10,LOW);//povorot

//novaya chact

servo.write(70);//otkryl zaxvat
delay(400);
digitalWrite(8,HIGH);//napravlenie na obekt
digitalWrite(10,HIGH);
delay(210);
digitalWrite(8,LOW);
digitalWrite(10,LOW);//doexal do obekta
delay(1000);
servo.write(0);//vzyal obekt
delay(1000);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//doexal do obekta
delay(375);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//doexal do obekta

digitalWrite(10,HIGH);//povernul po napravleniu k lunke
delay(310);
digitalWrite(8,HIGH);
delay(325);//doexal do lunki
digitalWrite(8,LOW);
digitalWrite(10,LOW);
delay(1000);
servo.write(60);//otpustil
delay(1300);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//nazad otyexal
delay(305);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//nazad

digitalWrite(10,HIGH);
digitalWrite(9,HIGH);//povorot do cleduiuhei lunki
delay(310);
digitalWrite(9,LOW);
digitalWrite(10,LOW);//povorot

//novaya chact

servo.write(70);//otkryl zaxvat
delay(400);
digitalWrite(8,HIGH);//napravlenie na obekt
digitalWrite(10,HIGH);
delay(278);
digitalWrite(8,LOW);
digitalWrite(10,LOW);//doexal do obekta
delay(1000);
servo.write(0);//vzyal obekt
delay(1000);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//doexal do obekta
delay(335);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//doexal do obekta

digitalWrite(10,HIGH);//povernul po napravleniu k lunke
delay(290);
digitalWrite(8,HIGH);
delay(325);//doexal do lunki
digitalWrite(8,LOW);
digitalWrite(10,LOW);
delay(1000);
servo.write(60);//otpustil
delay(1300);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//nazad otyexal
delay(355);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//nazad

digitalWrite(10,HIGH);
digitalWrite(9,HIGH);//povorot do cleduiuhei lunki
delay(320);
digitalWrite(9,LOW);
digitalWrite(10,LOW);//povorot

//novaya chact

servo.write(70);//otkryl zaxvat
delay(400);
digitalWrite(8,HIGH);//napravlenie na obekt
digitalWrite(10,HIGH);
delay(190);
digitalWrite(8,LOW);
digitalWrite(10,LOW);//doexal do obekta
delay(1000);
servo.write(0);//vzyal obekt
delay(1000);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//doexal do obekta
delay(335);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//doexal do obekta

digitalWrite(10,HIGH);//povernul po napravleniu k lunke
delay(340);
digitalWrite(8,HIGH);
delay(295);//doexal do lunki
digitalWrite(8,LOW);
digitalWrite(10,LOW);
delay(1000);
servo.write(60);//otpustil
delay(1300);

digitalWrite(9,HIGH);
digitalWrite(11,HIGH);//nazad otyexal
delay(345);
digitalWrite(9,LOW);
digitalWrite(11,LOW);//nazad

digitalWrite(10,HIGH);
digitalWrite(9,HIGH);//povorot do cleduiuhei lunki
delay(300);
digitalWrite(9,LOW);
digitalWrite(10,LOW);//povorot

}

void loop() {
// put your main code here, to run repeatedly:

}