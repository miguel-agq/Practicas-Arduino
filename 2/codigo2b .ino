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
  
	for (int i=11 ; i <= 13 ; i++)
    {
		digitalWrite( i , HIGH) ;
		delay (tiempo) ;
		digitalWrite( i , LOW);
		delay (tiempo) ;
		if(tiempo >= 100){
			tiempo = tiempo - 2;
		}
	}
}
