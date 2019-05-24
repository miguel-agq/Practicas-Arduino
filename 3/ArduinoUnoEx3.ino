// the setup routine runs once when you press reset:
const int tono = 200;

void setup() {
  // initialize the digital pin as an output.
 
  for ( int i = 10 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
 
  for(int i=10; i<=13 ;i++){
    digitalWrite( i , HIGH) ; 
    if(i==13){
      tone(9, tono);
      delay(1000);
      noTone(9);
      
    }
    
    else{
      delay(1000);
    }
    digitalWrite( i , LOW) ;
    delay(1000);
  
  }
      
  
}
