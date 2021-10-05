int IR1=7;
int IR2=9;
int LED=13;
int total=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(IR1)==LOW){
    while(digitalRead(IR2)==HIGH){
      
    }
    Serial.print("\nPerson has entered the room\n");
    total++;
    int inc=100+total*10;
    if(inc<255){
      analogWrite(LED,100+total*10);
    }
    else{
      analogWrite(LED,255);
    }
    delay(1000);
    analogWrite(LED,0);
    Serial.print("Total number of people in the room :");
    Serial.print(total);
  }
  else if(digitalRead(IR2)==LOW){
    while(digitalRead(IR1)==HIGH){
      
    }
    Serial.print("\nPerson has exited the room\n");
    total--;
    int inc=100+total*10;
    if(inc<255){
      analogWrite(LED,100+total*10);
    }
    else{
      analogWrite(LED,255);
    }
    delay(1000);
    analogWrite(LED,0);
    Serial.print("Total number of people in the room :");
    Serial.print(total);
    
  }
  
  
}
