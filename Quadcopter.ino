//Defining ports on the Arduino Nano. 
#define motor 10

void setup()
{
  Serial.begin(9600);
  pinMode(motor, OUTPUT);
}

void loop()
{
  digitalWrite(motor, HIGH);
  delay(1000); // Wait for 1 second.
  digitalWrite(motor, LOW);
  delay(10000); // Wait for 10 seconds.
}
