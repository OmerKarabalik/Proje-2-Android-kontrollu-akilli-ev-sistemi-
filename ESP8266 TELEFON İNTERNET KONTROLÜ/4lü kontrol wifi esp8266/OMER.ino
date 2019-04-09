#define ag_ismi "AndroidAP"
#define ag_sifresi "12345678"
#include <Servo.h>  /* Servo kutuphanesi projeye dahil edildi */
Servo motora,motorb,motorc,motord;
void setup()
{
  Serial.begin(115200); 
    motora.attach(3);                
    motorb.attach(4);
    motorc.attach(5);                
    motord.attach(8);
 Baglan:
  Serial.println("AT"); 
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  delay(2000); 
 
  if(Serial.find("OK")){         
     Serial.println("AT+CWMODE=3"); 
     delay(4000);
     String baglantiKomutu=String("AT+CWJAP=\"")+ag_ismi+"\",\""+ag_sifresi+"\"";
     Serial.println(baglantiKomutu);
     delay(4000);
 }
 else goto Baglan;
   Serial.print("AT+CIPMUX=1\r\n");
   delay(500);
   Serial.print("AT+CIPSERVER=1,80\r\n");
   delay(500);
   Serial.print("AT+CIFSR\r\n");
   delay(500);
   Serial.print("Sistem Hazır...");
}
void loop(){
   
  if(Serial.available()>0){
   if(Serial.find("+IPD,")){
      delay(500);
      String gelen ="";
      String gelen2="";
      int K,L,M,N;
      char oku;
     int saat,dakika,saniye;
      while(Serial.available()>0){
      oku = Serial.read();
      gelen +=oku;
      gelen2 +=oku;
     
     
      }
 
      Serial.println(gelen);
int basi=gelen2.indexOf("k"); // a500 ün başındaki a nın kaçıncı karakter olduğunu buluyoruz. 0 da a var
int sonu=gelen2.indexOf(" "); // a500 ün sonundaki boşluğun kaçıncı karakter olduğunu buluyoruz. 4 te boşluk var
K=gelen2.substring(basi+1,sonu-1).toInt(); // 500 ü buldurup A ya atama yapıyoruz. 1 inci karakterden başlayarak 3 karakter alıyoruz. 500 alındı. (1,3) 
//şimdi b için "a500 " ve boşluğu gelen içerisinden kesip atıyoruz. yeni gelen b ile başlayacak

      
      if((gelen.indexOf("A")>-1)){
      digitalWrite(13,HIGH);  }
      if((gelen.indexOf("A3")>-1)){
      digitalWrite(13,HIGH);  
      delay(3000);digitalWrite(13,LOW); }
      
      if((gelen.indexOf("U")>-1)){
      digitalWrite(13,HIGH); 
       digitalWrite(12,HIGH);  }
        if((gelen.indexOf("u")>-1)){
      digitalWrite(11,HIGH); 
       digitalWrite(10,HIGH);  }
       if((gelen.indexOf("T")>1)){
      digitalWrite(13,LOW); 
       digitalWrite(12,LOW);  }
        if((gelen.indexOf("t")>-1)){
      digitalWrite(11,LOW); 
       digitalWrite(10,LOW);  }
       
      if((gelen.indexOf("B")>-1)){
      digitalWrite(13,LOW);                    
    }
      if((gelen.indexOf("C")>-1)){
      digitalWrite(12,HIGH);                  
      }
      if((gelen.indexOf("C5")>-1)){
      digitalWrite(12,HIGH);
      delay(5000);    digitalWrite(12,LOW);              
      }
      if((gelen.indexOf("D")>-1)){
      digitalWrite(12,LOW);                    
      }
      if((gelen.indexOf("E")>-1)){
      digitalWrite(11,HIGH);                  
      }
      if((gelen.indexOf("E7")>-1)){
      digitalWrite(11,HIGH);
      delay(7000);  digitalWrite(11,LOW);                  
      }
      if((gelen.indexOf("F")>-1)){
      digitalWrite(11,LOW);                    
      }
      if((gelen.indexOf("G")>-1)){
      digitalWrite(10,HIGH);                  
      }
      if((gelen.indexOf("G8")>-1)){
      digitalWrite(10,HIGH);  
delay(8000);
                      digitalWrite(10,LOW); 
      }
      if((gelen.indexOf("H")>-1)){
      digitalWrite(10,LOW);                    
      }
      if((gelen.indexOf("A6")>-1)){
      digitalWrite(13,HIGH); 
      delay(5000);  
      digitalWrite(13,LOW);               
      }
     if(gelen.indexOf("P10")>1){ motora.write(0);  }
        if(gelen.indexOf("P11")>1){ motora.write(10);  }
        if(gelen.indexOf("P12")>1){ motora.write(20);  }
        if(gelen.indexOf("P13")>1){ motora.write(30); }
        if(gelen.indexOf("P14")>1){ motora.write(40); }
        if(gelen.indexOf("P15")>1){ motora.write(50);  }
        if(gelen.indexOf("P16")>1){ motora.write(60);  }
        if(gelen.indexOf("P17")>1){ motora.write(70);  }
        if(gelen.indexOf("P18")>1){ motora.write(80); }
        if(gelen.indexOf("P19")>1){ motora.write(90); }
         if(gelen.indexOf("P110")>1){ motora.write(100);  }

      if(gelen.indexOf("O20")>1){ motorb.write(100);}
      if(gelen.indexOf("O21")>1){ motorb.write(90);}
       if(gelen.indexOf("O22")>1){ motorb.write(80);}
        if(gelen.indexOf("O23")>1){ motorb.write(70);}
        if(gelen.indexOf("O24")>1){ motorb.write(60);}
        if(gelen.indexOf("O25")>1){ motorb.write(50);}
        if(gelen.indexOf("O26")>1){ motorb.write(40);}
        if(gelen.indexOf("O27")>1){ motorb.write(30);}
        if(gelen.indexOf("O28")>1){ motorb.write(20);}
        if(gelen.indexOf("O29")>1){ motorb.write(10);}
        if(gelen.indexOf("O210")>1){ motorb.write(0);}

         if(gelen.indexOf("L10")>1){ motorc.write(0);}
      if(gelen.indexOf("L11")>1){motorc.write(10);}
       if(gelen.indexOf("L12")>1){ motorc.write(20);}
        if(gelen.indexOf("L13")>1){ motorc.write(30);}
        if(gelen.indexOf("L14")>1){ motorc.write(40);}
        if(gelen.indexOf("L15")>1){motorc.write(50); }
        if(gelen.indexOf("L16")>1){ motorc.write(60);}
        if(gelen.indexOf("L17")>1){motorc.write(70);}
        if(gelen.indexOf("L18")>1){ motorc.write(80);}
        if(gelen.indexOf("L19")>1){ motorc.write(90);}
        if(gelen.indexOf("L110")>1){ motorc.write(90);}
   
      if(gelen.indexOf("Y0")>1){ motord.write(0);}
      if(gelen.indexOf("Y10")>1){ motord.write(30);}
      if(gelen.indexOf("Y20")>1){ motord.write(50);}
    }
  }
}
