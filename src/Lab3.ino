SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {

  //    Blue
  pinMode(D7, OUTPUT);
  //    Green
  pinMode(D6, OUTPUT);
  //    Red
  pinMode(D5, OUTPUT);

}


void loop() {
  //flash red 
  makeColor(256, 0, 0);
  cleanUp();

  //flash green
  makeColor(0, 256, 0);
  cleanUp();

  //flash blue
  makeColor(0, 0, 256);
  cleanUp();

  //flash orange
  makeColor(256, 50, 0);
  cleanUp();
  
  //flash yellow
  makeColor(255, 255, 0);
  cleanUp();

  //flash purple
  makeColor(160, 32, 240);
  cleanUp();
  
  //flash cyan
  makeColor(0, 255, 255);
  cleanUp();
}

void cleanUp(){
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(500);
}

void makeColor(int red, int green, int blue){
  analogWrite(D5, red);
  analogWrite(D6, green);
  analogWrite(D7, blue);
  delay(500);
}