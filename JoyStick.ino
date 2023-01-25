#define joyX A0
#define joyY A1

void setup() {
  Serial.begin(9600);
  pinMode(joyX, INPUT);
  pinMode(joyY, INPUT);
}

void loop(){
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);
  int homePosition = 90;

  int xMap = map(xValue, 0, 1080, 0, 180);
  int yMap = map(yValue, 0, 1080, 0, 180);

  Serial.println(xMap, yMap);

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
