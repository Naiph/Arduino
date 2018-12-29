int LED1 = 8;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;
int LED5 = 12;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:




digitalWrite(LED1,HIGH);

Serial.print("Red");
delay(1000);
digitalWrite(LED1,LOW);

digitalWrite(LED3,HIGH);

Serial.print("White");
delay(1000);
digitalWrite(LED3,LOW);


digitalWrite(LED2,HIGH);

Serial.print("Green");
delay(1000);
digitalWrite(LED2,LOW);



digitalWrite(LED5,HIGH);
Serial.print("White");
delay(1000);
digitalWrite(LED5,LOW);


digitalWrite(LED4,HIGH);
Serial.print("White");
delay(1000);
digitalWrite(LED4,LOW);



digitalWrite(LED4,HIGH);
Serial.print("White");
delay(1000);
digitalWrite(LED4,LOW);


digitalWrite(LED3,HIGH);
Serial.print("White");
delay(1000);
digitalWrite(LED3,LOW);


digitalWrite(LED2,HIGH);
Serial.print("White");
delay(1000);
digitalWrite(LED2,LOW);


}
