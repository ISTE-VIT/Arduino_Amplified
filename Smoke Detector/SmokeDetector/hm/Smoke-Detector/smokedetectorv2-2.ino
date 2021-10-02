
const int LED = 2; 
const int DO = 8; 
void setup() { 
 Serial.begin(9600); 
 pinMode(LED, OUTPUT); 
 pinMode(DO, INPUT); 
} 
void loop() { 
 int alarm = 0; 
 float sensor_volt; 
 float RS_gas; 
 float ratio; 
//-Replace the name "R0" with the value of R0 in the demo of First Test -/ 
 float R0 = 3.73; 
 int sensorValue = analogRead(A0); 
 sensor_volt = ((float)sensorValue / 1024) * 5.0; 
RS_gas = (5.0 - sensor_volt) / sensor_volt; // Depend on RL on yor module 
 ratio = RS_gas / R0; // ratio = RS/R0 
//------------------------------------------------------------/ 
 Serial.print("sensor_volt = "); 
 Serial.println(sensor_volt); 
 Serial.print("RS_ratio = "); 
 Serial.println(RS_gas); 
 Serial.print("Rs/R0 = "); 
 Serial.println(ratio); 
 Serial.print("\n\n"); 
 alarm = digitalRead(DO); 
 if (alarm == 1)
{ digitalWrite(LED, LOW); 
delay(1000);
}
 
 else if (alarm == 0)
 {digitalWrite(LED, HIGH); 
 
}
}
