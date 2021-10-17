// Automatic Light Switch - Nishant Giri

void setup()
{
  	// Configure Pins as Input and Output
  	pinMode(2, INPUT);
  	pinMode(8, OUTPUT);
}
void loop()
{
  	// Get Data from Sensor Port
  	int sensor = digitalRead(2);
  	// Pin State Change (0 to 1)
  	if(sensor == HIGH)
  	{
      	// Turn ON LED
      	digitalWrite(8, HIGH);
  	}
  	// Pin State Change (1 to 0)
  	else
  	{
      	// Turn OFF LED
      	digitalWrite(8, LOW);
  	}
  	// Delay of 10ms for LED
  	delay(10);
}