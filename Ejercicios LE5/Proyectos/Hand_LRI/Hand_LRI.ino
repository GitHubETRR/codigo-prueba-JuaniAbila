#include <Servo.h>

#define LITTEPIN  3 
#define RINGPIN   5 
#define INDEXPIN   9 


#define BAUDRATE 115200
#define DELAY2SEG 2000
#define MAX_ADC 1023

#define CLOSE 0 
#define OPEN 180
Servo LittleFinger;
Servo RingFinger;               
Servo IndexFinger;             

class hand_class
{
      int Little;
      int Ring;
      int Index;
        public:
      void move_fingers();
}hand;

void setup()
{
   Serial.begin(BAUDRATE); 

   LittleFinger.attach(LITTEPIN); 
   RingFinger.attach(RINGPIN);  
   IndexFinger.attach(INDEXPIN);  
   
   LittleFinger.write(CLOSE); 
   RingFinger.write(CLOSE);
   IndexFinger.write(CLOSE);
   
   delay(DELAY2SEG); 
}

void loop() {
   hand.move_fingers();
   delay(DELAY2SEG); 
}

void hand_class::move_fingers()
{ 
      LittleFinger.write(OPEN);
      RingFinger.write(OPEN);
      IndexFinger.write(OPEN);

      delay(DELAY2SEG);
      
      LittleFinger.write(CLOSE);
      RingFinger.write(CLOSE);
      IndexFinger.write(CLOSE);         
}
