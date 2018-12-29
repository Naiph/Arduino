int switchPin = 8;
int ledPin = 3;


boolean lastButton = LOW;
boolean ledOn = false;


boolean currentButton = LOW;

boolean debounce(boolean last)
  {
  boolean current = digitalRead(switchPin);
  if(last!=current)
  {
    delay(5);
    current = digitalRead(switchPin);
    }
    return current;
  }


void setup() {
  // put your setup code here, to run once:

pinMode(switchPin, INPUT);
pinMode(ledPin, OUTPUT);

}
 
void loop() {
  // put your main code here, to run repeatedly:
currentButton = debounce(lastButton);

if(lastButton == LOW && currentButton == HIGH)
  {
  ledOn = !ledOn;
  }
  
lastButton = currentButton;
digitalWrite(ledPin, ledOn);


}
