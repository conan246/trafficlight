void setup() {

  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);


}

void loop() {

   redon();
  delay (1000);
   yellowon();
  delay (1000);
   greenon();
  delay (1000);

}
  
void redon(){  
  int redled=2;
  int yelled=4;
  int greenled=7;
  digitalWrite(redled,HIGH);
  digitalWrite(yelled,LOW);
  digitalWrite(greenled,LOW);
  delay (6000);
}

void yellowon(){
  int redled=2;
  int yelled=4;
  int greenled=7;
  digitalWrite(yelled,HIGH);
  digitalWrite(redled,LOW);
  digitalWrite(greenled,LOW);
  delay (3000);
}

void greenon(){
  int redled=2;
  int yelled=4;
  int greenled=7;
  digitalWrite(greenled,HIGH);
  digitalWrite(yelled,LOW);
  digitalWrite(2,LOW);
  delay (6000);

  }
