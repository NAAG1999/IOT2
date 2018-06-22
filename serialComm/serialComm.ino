byte byteRead;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  /*check if data has sent from comp*/
  if (Serial.available()){
    byteRead = Serial.read();
    /*Serial.write(byteRead);*/

    //managing memory as follows
    //Serial.write(Serial.read());
    Serial.println(byteRead);
    }
}
