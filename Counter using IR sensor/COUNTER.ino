#define buzzer 5      // buzzer at pin 5
#define sensor 6      // ir sensor at pin 6
int sound=250;         // set buzzer sound
void setup()
{
Serial.begin(9600);
pinMode(sensor,INPUT);
pinMode(buzzer,OUTPUT);
}

void loop()
{
int detect=digitalRead(sensor);   // read status of sensor
if(detect==HIGH)               // if sensor detects obstacle
{       
tone(buzzer,sound);            // buzzer sounds
}
else{
digitalWrite(led,LOW);
noTone(buzzer);
}
delay(300);
} 
