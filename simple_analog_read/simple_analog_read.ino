void setup() 
{
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor=analogRead(A0);
  Serial.println(sensor);
  delay(100);

}
