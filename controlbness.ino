int switchPin = 8;
int ledPin = 3; 


boolean lastButton = LOW;
int ledLevel = 0;


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
  ledLevel = ledLevel + 102;
  }
lastButton = currentButton;
if(ledLevel>255) ledLevel = 0;


digitalWrite(ledPin, ledLevel);


}
