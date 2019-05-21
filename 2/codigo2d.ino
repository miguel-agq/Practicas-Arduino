// the setup routine runs once when you press reset:
int tiempo = 200;
void setup() {
  // initialize the digital pin as an output.

  for ( int i = 11 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
 
  for(int i=11; i<=13 ;i+=2){
  	digitalWrite( i , HIGH) ;
  }
  delay(1000);
  for(int i=11; i<=13 ;i+=2){
  	digitalWrite( i , LOW) ;
  }
  delay(1000);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
