


#include <Servo.h>  // servo library


Servo servo1;  // servo control object


void setup()
{
  
  servo1.attach(9);
}


void loop()
{
  int position;
  

  servo1.write(540);    // Tell servo to go to 90 degrees


  delay(1000);         // Pause to get it time to move

  servo1.write(180);   // Tell servo to go to 180 degrees

  delay(1000);         // Pause to get it time to move

  servo1.write(0);     // Tell servo to go to 0 degrees

 delay(1000);         // Pause to get it time to move
  
} 
/* 
  for(position = 0; position < 180; position += 2)
  {
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  // Tell servo to go to 0 degrees, stepping by one degree

  for(position = 180; position >= 0; position -= 1)
  {                                
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }
}
*/
