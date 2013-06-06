/*
Author:    Logan Edwards
Site:      le-create.com
Version:   2013-06-06

About: Simple thermostat using a 10k thermistor and Uno board.
*/

#define LED 13              // LED connected to
                            // digital pin 13
#define THERM 0            // Thermister connected
                            // to analog pin 0
int delayTime = 1000;
boolean setupRun = false;
void setup()
{
  pinMode(LED, OUTPUT);    // sets the digital pin as output                           
  pinMode(THERM, INPUT);   // sets the ananlog pin as input
  Serial.begin(9600);
  
}                          
/* Initialization function to display the header for 
Serial output.*/
void theBegin() {

Serial.println("Thermister Readings: ");
delay(delayTime * 2);
setupRun = true;
}
void loop()
{
  if(!setupRun) {
    theBegin();
  }
  int val = analogRead(0);  // Read the resistance value
  delay(delayTime);        // Wait
  Serial.println(val);    // Print the value
  if (val > 570) {        // Arbitrary value chosen for testing
    digitalWrite(LED, HIGH);  // LED used as output device for testing
  }
  else {
    digitalWrite(LED, LOW); 
  }
  
}
