
// All the lines starting with "//" are comments and are used to
// explain what we do in the code. Make sure to comment all the 
// stuff you do that is not super trivial

void setup() {
  // initialize pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // turn the LED on 
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for 200ms
  delay(200);        

  // turn the LED off 
  digitalWrite(LED_BUILTIN, LOW);
  // wait for 1000ms
  delay(400);  
  
  // turn the LED on 
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for 200ms
  delay(800);        

  // turn the LED off 
  digitalWrite(LED_BUILTIN, LOW);
  // wait for 1000ms
  delay(400);   
}

// The resulting blinking should look something like this:
// **____********____ ... and so on
