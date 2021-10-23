// Theft Alert System - Nishant Giri

#define SENSOR A0
#define LED 2
#define BUZZER 3
void setup()
{
  	// Configure Pins as Input and Output
  	Serial.begin(9600);
  	pinMode(SENSOR, INPUT);
  	pinMode(LED, OUTPUT);
  	pinMode(BUZZER, OUTPUT);
}
void loop()
{
  	// Get Data from Sensor Port
  	int sensor = analogRead(A0);
  	if(sensor > 1000)
  	{
      	// Trigger Buzzer ON
      	tone(BUZZER, 500);
      	// Turn ON LED
      	digitalWrite(LED, HIGH);
      	Serial.println(sensor);
    	Serial.println("Motion Detected");
  	}
  	else
  	{
      	// Trigger Buzzer OFF
      	noTone(BUZZER);
      	// Turn OFF LED
     	digitalWrite(LED, LOW);
      	Serial.println(sensor);
    	Serial.println("No Motion Detected");
    }
}