// For LEDs
int LED1 = 8;
int LED2 = 9;
int LED3 = 10;

// For Temperature Sensor

int ThermistorPin = 0;
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

int K;

void setup() {
  //Initialize serial port
  Serial.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}


void loop() {

  // For LEDs
  /*
    digitalWrite(LED1, HIGH);    // turn on LED1
    delay(200);                  // wait for 200ms
    digitalWrite(LED2, HIGH);    // turn on LED2
    delay(200);                  // wait for 200ms
    digitalWrite(LED3, HIGH);    // turn on LED3
    delay(200);                  // wait for 200ms
    digitalWrite(LED1, LOW);     // turn off LED1
    delay(300);                  // wait for 300ms
    digitalWrite(LED2, LOW);     // turn off LED2
    delay(300);                  // wait for 300ms
    digitalWrite(LED3, LOW);     // turn off LED3
    delay(300);                  // wait for 300ms before running program all over again
  */

  // For Temperature Sensor
  
   Vo = analogRead(ThermistorPin);
  
  
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2 * logR2 + c3 * logR2 * logR2 * logR2));
  T = T - 273.15;
  T = (T * 9.0) / 5.0 + 32.0;
  
  
  K = Vo - 273;
  if (K > 25){
    
    digitalWrite(LED2, HIGH);
  }
  else{
    digitalWrite(LED2, LOW);
    }
  Serial.print("Temperature: ");
  Serial.print(T);
  Serial.print("     ");
  Serial.print(K);
  Serial.println(" Celsius");
  // Condition for LED and Temperature Sensor
  

  
  delay(3000);
}
