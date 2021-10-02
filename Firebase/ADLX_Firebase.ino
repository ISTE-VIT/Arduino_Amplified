#include <FirebaseArduino.h>
#include <ArduinoJson.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <math.h>

const int x_out = A1; 
const int y_out = A2; 
const int z_out = A3; 

#define FIREBASE_HOST *************.firebaseio.com"
#define FIREBASE_AUTH "**************************"
#define WIFI_SSID "**************"
#define WIFI_PASSWORD "***************"
 
String stringX;
String stringY;
String stringZ;
void setup()
{
  Serial.begin(115200);
  pinMode(D0,OUTPUT);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED)
      {
    Serial.print(".");
    delay(1500);
      }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
 
}
 
void loop()
{
  delay(2000);
  int x_adc_value, y_adc_value, z_adc_value; 
  double x_g_value, y_g_value, z_g_value;
  double roll, pitch, yaw;
  x_adc_value = analogRead(x_out); 
  y_adc_value = analogRead(y_out); 
  z_adc_value = analogRead(z_out); 
  
  x_g_value = ( ( ( (double)(x_adc_value * 5)/1024) - 1.65 ) / 0.330 ); 
  y_g_value = ( ( ( (double)(y_adc_value * 5)/1024) - 1.65 ) / 0.330 );  
  z_g_value = ( ( ( (double)(z_adc_value * 5)/1024) - 1.80 ) / 0.330 ); 
  roll = ( ( (atan2(y_g_value,z_g_value) * 180) / 3.14 ) + 180 );
  pitch = ( ( (atan2(z_g_value,x_g_value) * 180) / 3.14 ) + 180 );
  yaw = ( ( (atan2(x_g_value,y_g_value) * 180) / 3.14 ) + 180 ); 
  Serial.print("Roll = ");
  Serial.print(roll);
  Serial.print("\t");
  Serial.print("Pitch = ");
  Serial.print(pitch);
  Serial.print("\t\t");
  Serial.print(yaw);
  Serial.print("\n\n");
  delay(1000);
}  
stringX = String(roll);
stringY = String(pitch);
StringZ = String(yaw);
Firebase.setString("Roll/Value",stringX);
Firebase.setString("Pitch/Value",stringY);
Firebase.setString("Yaw/Value",stringZ);
delay(900);            
}
