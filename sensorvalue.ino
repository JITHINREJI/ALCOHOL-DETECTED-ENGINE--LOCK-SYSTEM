void setup() {
  Serial.begin(9600);
  
}
void loop() {
  int x=analogRead(A0);
  Serial.print("x=");
  Serial.print("\n");
  
  Serial.print(x);
  
  
}

