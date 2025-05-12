#include <Arduino.h>

int flag1 = 0;
int flag2 = 0;
void setup()
{
  Serial.begin(115200);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    char number = Serial.read();
    if (number == '1')
    {
      if (flag1 == 0)
      {
        digitalWrite(21, HIGH);
        Serial.println("LED1 ON");
        flag1 = 1;
      }
      else
      {
        digitalWrite(21, LOW);
        Serial.println("LED1 OFF");
        flag1 = 0;
      }
    }
    else if(number == '2')
    {
      if (flag2 == 0)
      {
        digitalWrite(22, HIGH);
        Serial.println("LED2 ON");
        flag2 = 1;
      }
      else
      {
        digitalWrite(22, LOW);
        Serial.println("LED2 OFF");
        flag2 = 0;
      }
    }
  }
  delay(1000);
}
