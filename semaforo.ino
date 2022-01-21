void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}


void loop()
{

long int time = 250000;
int flag = 0;



  for (long int i = 0; i < time; i++){

    digitalWrite(12,HIGH);
    if (!digitalRead(2) && flag == 0){

      time = (time-i)/2;
      flag = 1;
      i=0;
              }

  }

  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  delay(5000);

  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(5000);


  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

