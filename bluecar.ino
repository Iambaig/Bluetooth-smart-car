#define m11 11
#define m12 12
#define m21 10
#define m22 9

void forward()
{
  digitalWrite(m11, HIGH);
  digitalWrite(m12, LOW);
  digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
}
void backward()
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, HIGH);
  digitalWrite(m21, LOW);
  digitalWrite(m22, HIGH);
}
void left()
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, HIGH);
  digitalWrite(m21, HIGH);
  digitalWrite(m22, LOW);
}
void right()
{
  digitalWrite(m11, HIGH);
  digitalWrite(m12, LOW);
  digitalWrite(m21, LOW);
  digitalWrite(m22, HIGH);
}
void Stop()
{
  digitalWrite(m11, LOW);
  digitalWrite(m12, LOW);
  digitalWrite(m21, LOW);
  digitalWrite(m22, LOW);
}
void setup() {
  Serial.begin(9600);
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);

}


void loop() {
  while(Serial.available())
  {
    char d = Serial.read();
    if (d=='1')
    {
      Serial.println("forward");
      forward();
    }
    else if (d=='2')
    {
      Serial.println("backward");
      backward();
    }
    else if (d=='3')
    {
      Serial.println("stop");
      Stop();
    }
     else if (d=='4')
    {
      Serial.println("left");
      left();
    }
     else if (d=='5')
    {
      Serial.println("right");
      right();
    }
  }
}
