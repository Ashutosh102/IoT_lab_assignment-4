
#include "DHT.h"

#define DHTPIN 4 
#define DHTTYPE DHT22   
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  dht.begin();
}

void loop() {
  
  delay(2000);
  float h = dht.readHumidity();

  float t = dht.readTemperature();

  float f = dht.readTemperature(true);

  Serial.print(F("\n Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F "));
  delay(1000);
}
