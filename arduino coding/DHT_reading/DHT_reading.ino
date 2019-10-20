#include <dht.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop()
{
  
  int chk = DHT.read11(DHT11_PIN);
  if(DHT.humidity > 1)
  {
  Serial.print("\nHumidity = ");
  Serial.println(DHT.humidity);
    if(DHT.humidity > 70)
  {
  Serial.println("co-ordinate");
  Serial.print("23.815025,90.427337\n");
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("\nHumidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
  }
}
  }
