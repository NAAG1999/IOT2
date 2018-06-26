byte Read:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    byteRead = Serial.read();
    if(byteRead == 44){
      Serial.println();
      }else{
        Serial.write(byteRead);
      }
    }
}
