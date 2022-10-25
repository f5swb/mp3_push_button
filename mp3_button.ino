int buttonPin = 5; // Naming switch button pin
int led = 12;   // Namin LED pinXX                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
int buttonValue; // A variable to store Button Status / Input
int dt=100 ;
#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"
static const uint8_t PIN_MP3_TX = 6; // Connects to module's RX 
static const uint8_t PIN_MP3_RX = 7; // Connects to module's TX 
SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);

// Create the Player object
DFRobotDFPlayerMini player;

 void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH); 
  Serial.begin(9600); 
  softwareSerial.begin(9600);
  player.begin(softwareSerial); 
  player.volume(25);
}

void loop() {

if(digitalRead(buttonPin)==1) {
    Serial.println("REPOS");
    
    digitalWrite(led, LOW);
    } else {
    Serial.println("MARCHE");
    digitalWrite(led, HIGH);
    Serial.println("playerok");
    player.play(1);
    delay(10000);
  }
}
   
    
