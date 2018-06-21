int a = 5;
int b = 10;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Serial.println("Here's some math");
  Serial.print("a= ");
  Serial.println(a);
  Serial.print("b= ");
  Serial.println(b);
  Serial.print("a+b= ");
  Serial.println(a+b);
}

void loop() {
  // put your main code here, to run repeatedly:

}
