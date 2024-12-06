
#define SENSOR A0
#define BAUDRATE 9600 

void setup()
{
  Serial.begin(BAUDRATE);
  pinMode(A0,INPUT);
}

void loop()
{
  int Sense;
  Sense=analogRead(SENSOR);
  Serial.println(Sense);
}
