#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);

void setup()
{
   pinMode(13,OUTPUT);
   mySerial.begin(9600);  
   Serial.begin(9600);    
   delay(100);
}
void loop()
{
  
   int x=analogRead(A0);
   Serial.print(x);
   Serial.print("\n");
   if(x>450)
   {
  
         digitalWrite(13,HIGH);
         if (Serial.available()>0)
         mySerial.println("AT+CMGF=1");    
         delay(100);
         mySerial.println("AT+CMGS=\"+918547660715\"\r");
         delay(100);
         mySerial.println("Drunken Drive Detected");
         delay(100);
         mySerial.println((char)26);
         delay(100);
         mySerial.println("ATD+918547660715;");
         delay(100);
   }
   else
       digitalWrite(13,LOW);
   }

