int calibrationTime = 10; 
long unsigned int lIn; 
long unsigned int pause = 5000; 
boolean lLow = true; 
boolean LTime; 
int pirPin = 3;  
int ledPin = 3; 
void setup(){ 
  Serial.begin(9600);
  pinMode(pirPin, INPUT); 
  pinMode(ledPin, OUTPUT); 
  digitalWrite(pirPin, LOW); 
  Serial.print("calibrating sensor "); 
  for(int i = 0; i < calibrationTime; i++)
  { 
    Serial.print("."); delay(1000); 
  } 
  Serial.println(" done"); 
  Serial.println("SENSOR ACTIVE"); 
  delay(30); }
  void loop()
  { 
    if(digitalRead(pirPin) == HIGH)
    { 
      digitalWrite(ledPin, HIGH);
      if(lLow)
      {
        lLow = false; 
        Serial.println("---"); 
        Serial.print("motion detected at "); 
        Serial.print(millis()/1000); 
        Serial.println(" sec"); 
        delay(30); 
        } 
        LTime = true; 
        } 
        if(digitalRead(pirPin) == LOW)
        { 
          digitalWrite(ledPin, LOW);
          if(LTime)
          { 
            lIn = millis(); 
            LTime = false; 
            } 
            if(!lLow && millis() - lIn > pause)
            { 
              lLow = true; 
              Serial.print("motion ended at "); 
              //output 
              Serial.print((millis() - pause)/1000); 
              Serial.println(" sec"); 
              delay(30); 
              } 
              } 
              }
          }
    }
  }
