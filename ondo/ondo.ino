#include <DHT.h>
#define DHTPIN A1 
#define DHTTYPE dht11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  

}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  Serial.print("Humidity : ");
  Serial.println(h);
  Serial.print("Temperature : ");
  Serial.print(t);
}
