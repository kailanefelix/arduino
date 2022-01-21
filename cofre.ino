void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  
  delay(1000);
  Serial.println("Potenciometro:");
  delay(1000);
  Serial.println(analogRead(A0));
  int numero = analogRead(A0);
  if (numero == 552){
  
  delay(1000);
  Serial.println("Senha correta:");
  Serial.println(analogRead(A0));
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }

  else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
 
}
