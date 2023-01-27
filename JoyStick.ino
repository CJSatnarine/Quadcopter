#define joyX A0
#define joyY A1
#define button 2

void setup() {
  Serial.begin(9600);
  pinMode(joyX, INPUT);
  pinMode(joyY, INPUT);
}

void loop(){
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);

  int xMap = map(xValue, 0, 1023, 0, 180);
  int yMap = map(yValue, 0, 1023, 0, 180);

  Serial.print("xPos: ");
  Serial.println(xMap);
  Serial.print("yPos: ");
  Serial.println(yMap);

//  //Print the values of x and y. 
//  Serial.print(xValue);
//  Serial.print("\n");
//  Serial.print(yValue);
//  Serial.print("\n");
//
//  if (xMap !=  homePosition || yMap != homePosition){
//    Serial.println(xMap + "\t" + yMap);
//  }
//  else {
//    Serial.println("At home position");
//  }
}
