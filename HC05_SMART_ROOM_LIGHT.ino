#define ledPin 7  // Relay control pin
char value; // Submitted value

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT); //Relay pin set output
  digitalWrite(ledPin, HIGH); //Initially the room light is off
  
}

void loop() {
    if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    value = Serial.read(); // Reads the data from the serial port
    }
     if (value == 'y') { 
  digitalWrite(ledPin, LOW); // Room Light ON
 }
 else if (value == 's') {
  digitalWrite(ledPin, HIGH); // Room Light OFF
 }
}
