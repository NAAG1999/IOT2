int ledPin = 9;
int sensorPin = A0;

int sensorValue = 0;        // value read from the pot
int outputvalue = 0;        // value output to the PWM (analog out)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  outputvalue = map(sensorValue, 0 ,1023, 0, 255);
  analogWrite(ledPin, outputvalue);
   
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  Serial.print("output = ");
  Serial.println(outputvalue);

  delay(1000);
}
