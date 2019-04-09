#define RELAY 13//Röle(Relay) kontrol ucu 
void setup() 
{ 

pinMode(RELAY, OUTPUT);//Röle kontrol ucu çıkış olarak tanımlanmıştır 
Serial.begin(9600); // seri haberleşme 9600 hızı ile başlatılmıştır. 

} 

void loop() 
{ 

digitalWrite(RELAY,LOW); // Röle'nin kontrol edildiği pin (8)Lojik 1 yapıldı(5 Volt)- LED SÖNER 
delay(2000); // 2 Saniye Bekle 
digitalWrite(RELAY,HIGH);// Röle'nin kontrol edildiği pin (8)Lojik 0 yapıldı(0 Volt)- LED YANAR
delay(2000); // 2 Saniye Bekle 

}
