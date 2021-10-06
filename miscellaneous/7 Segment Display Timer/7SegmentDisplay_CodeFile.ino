/*
This code is a copyright of Ish Kapoor. And required credit should be given.
*/

/* Declaring the variables and pins for 7 Segment display */
int f = 13;
int g = 12;
int e = 11;
int d = 10;
int c = 9;
int b = 8;
int a = 7;
int dec = 6;
int inp;
int counter = 0;
const int timerButtonPin = 5;
const int startButtonPin = 4;
const int BuzzerPin = 3;

int n[16][7] = {
  /*a, b, c, d, e, f, g*/
  {1, 1, 1, 1, 1, 1, 0}, /*0*/
  {0, 1, 1, 0, 0, 0, 0}, /*1*/
  {1, 1, 0, 1, 1, 0, 1}, /*2*/
  {1, 1, 1, 1, 0, 0, 1}, /*3*/
  {0, 1, 1, 0, 0, 1, 1}, /*4*/
  {1, 0, 1, 1, 0, 1, 1}, /*5*/
  {1, 0, 1, 1, 1, 1, 1}, /*6*/
  {1, 1, 1, 0, 0, 0, 0}, /*7*/
  {1, 1, 1, 1, 1, 1, 1}, /*8*/
  {1, 1, 1, 1, 0, 1, 1}, /*9*/
  {1, 1, 1, 0, 1, 1, 1}, /*A*/
  {0, 0, 1, 1, 1, 1, 1}, /*b*/
  {1, 0, 0, 1, 1, 1, 0}, /*C*/
  {0, 1, 1, 1, 1, 0, 1}, /*d*/
  {1, 0, 0, 1, 1, 1, 1}, /*E*/
  {1, 0, 0, 0, 1, 1, 1}  /*F*/
};

void setup()
{
  /* Declaring inp/op of pins in setup */
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(dec, OUTPUT);
  pinMode(timerButtonPin, INPUT);
  pinMode(startButtonPin, INPUT);
  pinMode(BuzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int timerButtonState;
  timerButtonState = digitalRead(timerButtonPin);
  /* 'timerButtonState' stores the current state [On/Off]
     of the Timer-button */
  int startTimerButtonState;
  startTimerButtonState = digitalRead(startButtonPin);
  /* 'startTimerButtonState' stores the current state
     [On/Off] of the Start-button */

  if (timerButtonState == LOW)
  {
    /* When Timer-button is pressed,
       thec counter increments and till it is <= 10. */
    counter++;
    if (counter >= 10) {
      counter = 0;
    }
    Serial.print("Counter-Set: ");
    Serial.println(counter);
    num(counter);
    /* Displaying the value of counter on Display */
    delay(150);
  }

  if (startTimerButtonState == LOW) {
    /* On Start-button pressed,
         the counter decrements and value is displayed on
         7 Segment Display. */
    startReverseTimer(counter);
  }
}

void startReverseTimer(int time) {
  /* Decresing the counter value and displaying it on 7 Segment Display */
  for (int i = 0; i < time; i++)
  {
    num(time - i);
    digitalWrite(dec, HIGH);
    Serial.print("Counter-Reverse: ");
    Serial.println(time - i);
    delay(1000);
  }
  Serial.print("Counter-Reverse: Reset to ");
  num(0); /* Setting the value back to Zero when the timer ends. */
  /* digitalWrite(BuzzerPin, HIGH);
     delay(1000);
     digitalWrite(BuzzerPin, LOW); */
  tone(BuzzerPin, 200); /* Alarming the buzzer when timer ends. */
  delay(1000);
  noTone(BuzzerPin);
}

void num(int i)
{
  /* Writes the value as per the list for every LED in 7 Segment Display */
  digitalWrite(a, n[i][0]);
  digitalWrite(b, n[i][1]);
  digitalWrite(c, n[i][2]);
  digitalWrite(d, n[i][3]);
  digitalWrite(e, n[i][4]);
  digitalWrite(f, n[i][5]);
  digitalWrite(g, n[i][6]);
}
