#include <Servo.h>

#define SENSOR A0
#define MIDDLEPIN  3 
#define THUMBPIN   5 

#define BAUDRATE 115200
#define DELAY2SEG 2000
#define MAX_ADC 1023

#define CLOSE 0 
#define OPEN 180

Servo MiddleFinger;
Servo ThumbFinger;               

class hand_class
{
      int Middle;
      int Thumb;
        public:
      void move_fingers();
}hand;

void setup()
{
   Serial.begin(BAUDRATE); 

   MiddleFinger.attach(MIDDLEPIN); 
   ThumbFinger.attach(THUMBPIN);  
   
   MiddleFinger.write(CLOSE); 
   ThumbFinger.write(CLOSE);
   
   delay(DELAY2SEG);
}

void loop() 
{
   hand.move_fingers();
   delay(DELAY2SEG); 
}

void hand_class::move_fingers()
{ 
      ThumbFinger.write(OPEN);
      MiddleFinger.write(CLOSE);

      delay(DELAY2SEG);
      
      MiddleFinger.write(OPEN);
      ThumbFinger.write(CLOSE);
}
