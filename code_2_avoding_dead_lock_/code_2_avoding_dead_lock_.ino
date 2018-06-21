const int ledPin =13;
int lesState = LOW;

unsigned long previousMilis = 0;
const long interval = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMilis = milis();
  if (currentMilis - previousMilis >= interval){

    previousMilis = currentMilis();

    if(ledState == LOW){
        ledState = HIGH;
      } else{
        ledState = LOW;
        digitalWrite(ledPin, ledState);
      }
    }

}
