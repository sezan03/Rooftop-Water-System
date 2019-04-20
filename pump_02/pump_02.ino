int out = 13; 
int digital_input = 8; 
int green_led = 7;
int red_led = 6;
int val; 
void setup() {
  pinMode(13,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT); //Set pin 13 as OUTPUT pin, to send signal to relay
  pinMode(8,INPUT); //Set pin 8 as input pin, to receive data from Soil moisture sensor.
}

void loop() { 
  val = digitalRead(8); 
  if(val == LOW) 
  {
  digitalWrite(13,LOW); 
  digitalWrite(7,LOW); 
  digitalWrite(6,HIGH);
  }
  else
  {
  digitalWrite(13,HIGH); 
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  }
  delay(400);
}
