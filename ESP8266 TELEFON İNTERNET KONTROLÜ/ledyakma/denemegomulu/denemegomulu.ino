#include <Servo.h>  /* Servo kutuphanesi projeye dahil edildi */
Servo motor,motor2,motor3,motor4;  
int adc1 = A0;
int adc2 = A1;
int adc3 = A2;
int adc4 = A3;
void setup() 
{
  Serial.begin(9600);
  Serial.println("Analog input okuma ornegi.");
   motor.attach(2);  /* Servo motor 2 numarali pine baglandi */ 
   motor2.attach(3);
   motor3.attach(4);
   motor4.attach(5);
   
}
void loop() 
{
  int deger  = analogRead(adc1);
  int deger2  = analogRead(adc2);
   int deger3  = analogRead(adc3);
    int deger4  = analogRead(adc4);
  Serial.println(deger);
   Serial.println(deger2);
    Serial.println(deger3);
     Serial.println(deger4);
  delay(100);


   if(deger>=0 && deger<=160){   motor.write(15); }
    
    if(deger>=161 && deger<=320){ motor.write(35); }
    
    if(deger>=321 && deger<=480){ motor.write(60); }
   
    if(deger>=481 && deger<=640){ motor.write(80);; }
   
    if(deger>=641 && deger<=800){ motor.write(120); }
    
    if(deger>=801 && deger<=880){ motor.write(140); }
    if(deger>=881 && deger<=900){ motor.write(160); }
    if(deger>=901 && deger<980){motor.write(180); }


   if(deger2>=0 && deger2<=200){   motor2.write(0); }
    
    if(deger2>=201 && deger2<=400){ motor2.write(50); }
    
    if(deger2>=321 && deger2<=600){ motor2.write(100); }
   
    if(deger2>=481 && deger2<=800){ motor2.write(150);; }
   
    if(deger2>=641 && deger2<=980){ motor2.write(180); }
    
  if(deger3>=0 && deger3<=200){   motor3.write(0); }
    
    if(deger3>=201 && deger3<=400){ motor3.write(50); }
    
    if(deger3>=321 && deger3<=600){ motor3.write(100); }
   
    if(deger3>=481 && deger3<=800){ motor3.write(150);; }
   
    if(deger3>=641 && deger3<=980){ motor3.write(180); }
    
      
  if(deger4>=0 && deger4<=200){   motor4.write(0); }
    
    if(deger4>=201 && deger4<=400){ motor4.write(50); }
    
    if(deger4>=321 && deger4<=600){ motor4.write(100); }
   
    if(deger4>=481 && deger4<=800){ motor4.write(150);; }
   
    if(deger4>=641 && deger4<=980){ motor4.write(180); }


}  
