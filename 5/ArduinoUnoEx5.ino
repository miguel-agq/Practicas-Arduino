#include <Servo.h>  // Incluir la librería Servo
Servo servo1;       // Crear un objeto tipo Servo llamado servo1
int angulo = 0 ;
int pin=9;
int val = 0;
int vel = 1;

void setup()
{
    servo1.attach(pin) ;      // Conectar servo1 al pin 9
    pinMode(2, INPUT);        // declare pushbutton as input
}

void loop()
{
  if(digitalRead(2) == HIGH){
     servo1.write(angulo);
     delay(25);
     angulo+=vel;
    
    if(angulo>=180 || angulo <= 0){
      vel*=-1;
    }
  }
}
