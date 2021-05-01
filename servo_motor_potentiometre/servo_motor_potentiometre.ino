
#include <Servo.h>
#define PIN_POT A2;
int PIN_SERVO = 9;
Servo myservo;
int pos = 0; // initialise la position du servo moteur
int val; // variable qui va sauvegarder la valeur donnee par le potentiometre
void setup() {
Serial.begin(9600);
myservo.attach(PIN_SERVO); // configure le servo moteur a la pin digitale 9
}

void loop() {
val = analogRead(PIN_POT);
pos = map(val, 0, 1023, 0, 179); //
myservo.write(pos);
Serial.println(pos); // afficher la position du servo_moteur dans le moniteur serie
delay(100);
}
