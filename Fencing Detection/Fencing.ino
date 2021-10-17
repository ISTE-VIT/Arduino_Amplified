int val = 0;

int analogPin1 = A0;
int analogPin2 = A1;
int mode = 0; // 0 epee, 1 foil, 2 sabre

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() 
{
  
  while (mode == 0)
  {
    int val1 = analogRead(analogPin1);
    int val2 = analogRead(analogPin2);
    float volt1 = val*(5.0/1023.0);
    float volt2 = val*(5.0/1023.0);

    if (volt1 == 5.0 || volt2 == 5.0)
    {
      if (volt1 == 5.0)
      {
        digitalWrite(LED_BUILTIN, HIGH);
      }
    }
  }
  while (mode == 1)
  {
  }
  while (mode == 2)
  {
  }
}
