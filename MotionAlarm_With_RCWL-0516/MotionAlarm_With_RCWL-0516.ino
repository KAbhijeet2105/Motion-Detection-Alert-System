/***************************************************************************
   Motion detection alert using RCWL-0516 Sensor

  Written by Abhijeet Kadam

  DHT11 Sensor connected to
   OUT - 3
  Buzzer module connected to
  I/O - 12
  LED connected to
  LED - 13
 ***************************************************************************/



#define Spin 3    //RCWL OUT connected to pin 3 
#define Lpin 13   //LED connected to pin 13
#define Bpin 12   //Buzzer connected to pin 12


void setup() {
  // put your setup code here, to run once:

  pinMode(Spin, INPUT);
  pinMode(Lpin, OUTPUT);
  pinMode(Bpin, OUTPUT);

  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:


  int sense;

  sense = digitalRead(Spin);

  if (sense == HIGH)
  {
    digitalWrite(Lpin, HIGH);
    digitalWrite(Bpin, HIGH);
    delay(500);
    digitalWrite(Bpin, LOW);
    delay(500);


    Serial.println("Motion Detected!!");

  }
  else
  {
    digitalWrite(Lpin, LOW);
    digitalWrite(Bpin, LOW);

  }


}
