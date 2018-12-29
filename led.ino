int ledPin1 = 8;
int ledPin2 = 9;

void setup() {
  // put your setup code here, to run once:

pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(ledPin2,HIGH);
delay(1000);
digitalWrite(ledPin1, LOW);
delay(1000);  
}
