/* ArduSensor Switch Read

Reads the ArduSensor Switch, and prints if it is on or not on the Serial
monitor

Qtechknow kits required:
  ArduSensor Switch

made on 12 July 12
created by Quin
 */

int ArduSensorValue;   // variable to store the value of the ArduSensor Switch

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Switch
  ArduSensorValue=analogRead(0); 
  
  if(ArduSensorValue == 1023) {
    Serial.println("On");  // print "On" if the value was high
  }  
  if(ArduSensorValue == 0) {
    Serial.println("Off");  // print "Off" if the value was low
  }
  delay(100);
}
