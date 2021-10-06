int val = 0;

int analogPin1 = A0;
int analogPin2 = A1;
int mode = 0; // 0 epee, 1 foil, 2 sabre

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10, INPUT);
}

void loop() 
{
   if (mode == 0) //Epee
   {
    int val1 = analogRead(analogPin1); // hit detection Arithmatic
    int val2 = analogRead(analogPin2);
    float volt1 =  val1*(5.0/1023.0);
    float volt2 =  val2*(5.0/1023.0);

    if (volt1 == 5.0 || volt2 >= 4.5)
    {
      unsigned long timelock = (micros() + 40000); // set a time 40 milisecods after the first hit;
      
      digitalWrite(11, HIGH);
      
      while (micros() < timelock ) //lockout after 40 millis.
      {
        if (volt1 == 5.0)
        {
         digitalWrite(13, HIGH);
        }
        if (volt2 == 5.0)
        {
          digitalWrite(12, HIGH);
        }

        val1 = analogRead(analogPin1);
        val2 = analogRead(analogPin2);
        volt1 = val1*(5.0/1023.0);
        volt2 = val2*(5.0/1023.0);

        Serial.print(timelock - micros());
        Serial.print("\n");
      }
      digitalWrite(11, LOW);
      delay (2000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
      
    }
   }
   if (mode == 1) //Foil
         {
  
   }
   if (mode == 2) //Sabre
       {
  
   }
   
   if (digitalRead(10) == HIGH)
   {
      mode++;
      delay(1000);
   }
      if (mode > 2)
      {
        mode = 0;
      }

      Serial.print(mode);
}