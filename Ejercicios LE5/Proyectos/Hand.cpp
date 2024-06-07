#include <Servo.h>

#define LITTEPIN  3 
#define RINGPIN   5 
#define MIDDLEPIN  6 
#define INDEXPIN   9 
#define THUMBPIN  10 

#define LITTEPIN_READ  A0
#define RINGPIN_READ   A1
#define MIDDLEPIN_READ A2
#define INDEXPIN_READ   A3 
#define THUMBPIN_READ  A4

#define BAUDRATE 115200
#define DELAY2SEG 2000
#define MAX_ADC 1023
// Digital pins that control each finger

#define CLOSE 0 //Define CLOSE state
#define OPEN 180 //Define OPEN optional state to repair position imperfections

Servo LittleFinger;
Servo RingFinger;        
Servo MiddleFinger;        
Servo IndexFinger;         
Servo ThumbFinger;    
//Definition of digital objects for the servomotors 
void read_fingers();

class hand_class{
   
      int Little;
      int Ring
      int Mddle;
      int Index;
      int Thumb; 
   public:
      read_fingers();
      move_fingers();

}hand;

void setup()
{
   Serial.begin(BAUDRATE); 

   LittleFinger.attach(LITTEPIN);  // Set Little finger servo to digital pin 3
   RingFinger.attach(RINGPIN);  // Set Ring finger servo to digital pin 5
   MiddleFinger.attach(MIDDLEPIN);  // Set Middle finger servo to digital pin 6
   IndexFinger.attach(INDEXPIN);  // Set Index finger servo to digital pin 9
   ThumbFinger.attach(THUMBPIN);  // Set Thumb finger servo to digital pin 10

   LittleFinger.write(CLOSE); 
   RingFinger.write(CLOSE);
   MiddleFinger.write(CLOSE);
   IndexFinger.write(CLOSE);
   ThumbFinger.write(CLOSE);
   //Set all initial servomotors positions to 0
   //Here it would be optionally possible to modify the initial state depending on the servo orientation
   delay(DELAY2SEG);
}

void loop() {
   hand.read_fingers();
   hand.move_fingers();
   delay(DELAY2SEG); //Have to test the velocities of contraction and elongation
}

void handclass::read_fingers(){
   Little = analogRead(LITTEPIN_READ);
   Ring = analogRead(RINGPIN_READ);
   Middle = analogRead(MIDDLEPIN_READ);
   Index = analogRead(INDEXPIN_READ);
   Thumb = analogRead(THUMBPIN_READ);
   Little = map(Little, 0, MAX_ADC, 0, OPEN);
   Ring = map(Ring, 0, MAX_ADC, 0, OPEN);
   Middle = map(Middle, 0, MAX_ADC, 0, OPEN); //Position changes should be done in these asignations or below
   Index = map(Index, 0, MAX_ADC, 0, OPEN);
   Thumb = map(Thumb, 0, MAX_ADC, 0, OPEN);

}
void handclass::move_fingers(){
      LittleFinger.write(Little);
      RingFinger.write(Ring);
      MiddleFinger.write(Middle);
      IndexFinger.write(Index);
      ThumbFinger.write(Thumb);

}

