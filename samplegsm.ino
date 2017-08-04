#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10);

#include <SoftwareSerial.h>
void setup()
{
  mySerial.begin(9600);   
  Serial.begin(9600);  
  delay(100);
}


void loop()
{
  int x=analogRead(A0);
  if (Serial.available()>0)
  if (x>370)
  {
     SendMessage();
  }   
    
  }
 void SendMessage()
{
  mySerial.println("AT+CMGF=1");   
 delay(1000);  
  mySerial.println("AT+CMGS=\"+917403900273\"\r"); 
  delay(1000);
  mySerial.println("Drunken driving detected");
  delay(100);
   mySerial.println((char)26);
  delay(1000);
}



