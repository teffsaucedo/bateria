/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13.
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead().

 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground

 * Note: because most Arduinos have a built-in LED attached
 to pin 13 on the board, the LED is optional.


 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/AnalogInput

 */

int sensorPinA0 = A0;    // select the input pin for the potentiometer
int sensorPinA1 = A1;    // select the input pin for the potentiometer
int sensorPinA2 = A2;    // select the input pin for the potentiometer
int sensorPinA3 = A3;    // select the input pin for the potentiometer
int sensorPinA4 = A4;    // select the input pin for the potentiometer
int sensorPinA5 = A5;    // select the input pin for the potentiometer
int sensorPinA6 = A6;    // select the input pin for the potentiometer
int sensorPinA7 = A7;    // select the input pin for the potentiometer

int umbral = 70;         //

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600); 
}

void loop() {
  // read the value from the sensor:
  if (analogRead(sensorPinA0) > umbral){
    Serial.println("0");
    delay(50);
  }
  if (analogRead(sensorPinA1) > umbral){
    Serial.println("1");
    delay(50);
  }
  if (analogRead(sensorPinA2) > umbral){
    Serial.println("2");
    delay(50);
  }
  if (analogRead(sensorPinA3) > umbral){
    Serial.println("3");
    delay(50);
  }
  if (analogRead(sensorPinA4) > umbral){
    Serial.println("4");
    delay(50);
  }
  if (analogRead(sensorPinA5) > umbral){
    Serial.println("5");
    delay(50);
  }
  if (analogRead(sensorPinA6) > umbral){
    Serial.println("6");
    delay(50);
  }
  if (analogRead(sensorPinA7) > umbral){
    Serial.println("7");
    delay(50);
  }

}

