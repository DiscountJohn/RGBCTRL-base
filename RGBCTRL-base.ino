int BlueLED1 = 3;
int GreenLED1 = 5;
int RedLED1 = 6;
bool redrunning =false;
bool greenrunning = false;
bool bluerunning = false;
int countint;
int timesrun = 0;
bool countdirection = 0; // 0, counting up, 1, counting down
float delayspeed = 2;
int bright = 255; //max 255
int dim = 0; //min 0
void setup() {
  pinMode(BlueLED1, OUTPUT);
  pinMode(GreenLED1, OUTPUT);
  pinMode(RedLED1, OUTPUT);
}
void RedLED(){
  RedOn();
  RedOff();
}
void GreenLED(){
  GreenOn();
  GreenOff();
}
void BlueLED(){
  BlueOn();
  BlueOff();
}
void RedBlue(){
  RedOn();
  BlueOn();
  RedOff();
  BlueOff();
}
void BlueGreen(){
  BlueOn();
  GreenOn();
  BlueOff();
  GreenOff();
}
void GreenRed(){
  GreenOn();
  RedOn();
  GreenOff();
  GreenOn();
}
void BlueOn(){
  if(bluerunning == false){
  for(countint = dim; countint<=bright; countint++){
    analogWrite(BlueLED1, countint);
    bluerunning = true;
    delay(delayspeed);
  }
}
}
void RedOn(){
  if(redrunning == false){
    for(countint = dim; countint<=bright; countint++){
    analogWrite(RedLED1, countint);
    redrunning = true;
    delay(delayspeed);
  }
}
}
void GreenOn(){
  if(greenrunning == false){
    for(countint = dim; countint<=bright; countint++){ 
    analogWrite(GreenLED1, countint);
    greenrunning = true;
    delay(delayspeed);
  }
}
}
void BlueOff(){
  if(bluerunning == true){
  for(countint = bright; countint >=dim; countint--){
      analogWrite(BlueLED1, countint);
      delay(delayspeed);
      bluerunning = false;
    }
}
}

void GreenOff(){
  if(greenrunning == true){
  for(countint = bright; countint >=dim; countint--){
      analogWrite(GreenLED1, countint);
      greenrunning = false;
      delay(delayspeed);
    }
}
}

void RedOff(){
  if(redrunning == true){
  for(countint = bright; countint >=dim; countint--){
      analogWrite(RedLED1, countint);
      redrunning = false;
      delay(delayspeed);
    }
}
}

void totaloff(){
  if(redrunning == true){
    RedOff();
  }
  if(bluerunning == true){
    BlueOff();
  }
  if(greenrunning == true){
    GreenOff();
  }
  else{
    //empty else statement
  }
}
void totalon(){
  if(redrunning == false){
    RedOn();
  }
  if(bluerunning == false){
    BlueOn();
  }
  if(greenrunning == false){
    GreenOn();
  }
  else{
    //empty else statement
  }
}
void rainbow(){
  
  RedOn();
  BlueOff();
  GreenOn();
  RedOff();
  BlueOn();
  GreenOff();

}
void warninglight(){
  RedOn();
  delay(100);
  RedOff();
}
void loop() {
  // can put stuff here
  }
