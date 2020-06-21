int i=0;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  for(i=0;i<8;i++){
    digitalWrite(i, HIGH);
    delay(400); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(400); // Wait for 1000 millisecond(s)
  }
}