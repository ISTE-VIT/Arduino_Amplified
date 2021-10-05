// RGB LED - Nishant Giri

#define R 2
#define G 3
#define B 4
void setup()
{
    // Configure Pins as Output
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
}
void loop()
{
    // Turning ON PWM Ports with Random Duty Cycle Value
    analogWrite(R, random(200));
    analogWrite(G, random(200));
    analogWrite(B, random(200));
    // Delay of 100ms for LED to Refresh with New Random Values
    delay(100);	
}