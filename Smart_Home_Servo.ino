    
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"


#include <Servo.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "YourAuthToken";
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";

Servo gerak_servo;

BLYNK_WRITE(V1)
{
  gerak_servo.write(param.asInt());
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth,ssid,pass);

  gerak_servo.attach(2);
}

void loop()
{
  Blynk.run();
}
