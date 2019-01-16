
/* A simple program to sequentially turn on and turn off 3 LEDs */ 

int LED0 = 0;
int LED1 = 1;
int LED2 = 2;

int LED3 = 3;
int LED4 = 4;
int LED5 = 5;

int LED6 = 6;
int LED7 = 7;
int LED8 = 8;

int LED9 = 9;
int LED10 = 10;
int LED11 = 11;

int LED12 = 12;
int LED13 = 13;
int i = 20;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
   pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
   pinMode(LED11, OUTPUT);
  pinMode(LED12, OUTPUT);
  pinMode(LED13, OUTPUT);
   pinMode(LED0, OUTPUT);
  



}


void loop() {
  
  for(i=0;i<20;i++)
  
  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(2000);                  // wait for 200ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(2000);                  // wait for 200ms       
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(2000);                  // wait for 200ms
 digitalWrite(LED0, HIGH);
 delay(2000); 
 digitalWrite(LED4, HIGH);
 delay(2000); 
 digitalWrite(LED5, HIGH);
 delay(2000); 
 digitalWrite(LED6, HIGH);
 delay(2000); 
 digitalWrite(LED7, HIGH);
 delay(2000); 
 digitalWrite(LED8, HIGH);
 delay(2000); 
 digitalWrite(LED9, HIGH);
 delay(2000); 
 digitalWrite(LED10, HIGH);
 delay(2000); 
 digitalWrite(LED11, HIGH);
 delay(2000); 
 digitalWrite(LED12, HIGH);
 delay(2000); 
 digitalWrite(LED13, HIGH);
 delay(2000); 

  digitalWrite(LED0, LOW);
   digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
     digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW); 
       digitalWrite(LED5, LOW);
        digitalWrite(LED6, LOW);
         digitalWrite(LED7, LOW);
          digitalWrite(LED8, LOW);
           digitalWrite(LED9, LOW);
            digitalWrite(LED10, LOW);
 digitalWrite(LED11, LOW);
  digitalWrite(LED12, LOW);
   digitalWrite(LED13, LOW);
   
  i--;
}
