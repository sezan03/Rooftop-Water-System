int trigPin = 10;
int echoPin = 9;
int led = 7;
int red_led = 6;
int pump = 5;
int emergency_pin = 13;


void setup() {
  Serial.begin(9600); 
   pinMode(led, OUTPUT);
   pinMode(red_led, OUTPUT);
   pinMode(pump, OUTPUT);
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   pinMode(emergency_pin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
 
 
 
 if((distance>=12)) 
  {
    digitalWrite(led, HIGH);
    digitalWrite(pump, HIGH);
    digitalWrite(red_led, LOW);
}
   else if(distance<=3)
 {
     digitalWrite(led, LOW);
     digitalWrite(pump, LOW);
     digitalWrite(red_led, HIGH);
   }
 
}
