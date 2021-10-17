int trigger_pin = 2;
int echo_pin = 3;
//int buzzer_pin = 10; 
int time;
int distance; 
void setup() 
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
     //   pinMode (buzzer_pin, OUTPUT);
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;

  if (distance <= 10) 
        {
        Serial.println ("Very close to sensor! ");     
       // digitalWrite (buzzer_pin, HIGH);
        delay (500);
        }
  else {
        Serial.println ("Obstacle detected");
        Serial.print (" Distance = ");              
        Serial.println (distance);        
       // digitalWrite (buzzer_pin, LOW);
        delay (500);        
       } 
}