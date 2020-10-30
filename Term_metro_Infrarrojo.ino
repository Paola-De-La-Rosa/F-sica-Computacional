#include <Wire.h>

#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 termometroIR = Adafruit_MLX90614();

void setup() {

   Serial.begin(9600);
   termometroIR.begin();
}

void loop() {
  
  float temperaturaAmbiente = termometroIR.readAmbientTempC();
  float temperaturaObjeto = termometroIR.readObjectTempC();
 
  Serial.print("Temp. ambiente => ");
  Serial.print(temperaturaAmbiente);
  Serial.println("ºC");
 
  Serial.print("Temp. objeto => ");
  Serial.print(temperaturaObjeto);
  Serial.println("ºC");
  
  delay(2000);

}
