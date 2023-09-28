// the setup function runs once when you press reset or power the board

int verde = 10;
int amarillo = 11;
int rojo = 12;

void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(verde, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("Led verde encendido");
  delay(20000);                    // wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  Serial.println("Led verde apagado");


  for (int i; i <= 3; i++) {
    digitalWrite(verde, HIGH);  // turn the LED on (HIGH is the voltage level)
    Serial.println("Led verde encendido");
    delay(1000);               // wait for a second
    digitalWrite(verde, LOW);  // turn the LED off by making the voltage LOW
    Serial.println("Led verde apagado");
    delay(1000);
  }
  digitalWrite(amarillo, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("Led amarillo encendido");
  delay(10000);                 // wait for a second
  digitalWrite(amarillo, LOW);  // turn the LED off by making the voltage LOW
  Serial.println("Led amarillo apagado");

  digitalWrite(rojo, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("Led rojo encendido");
  delay(20000);                 // wait for a second
  digitalWrite(rojo, LOW);  // turn the LED off by making the voltage LOW
  Serial.println("Led rojo apagado");
}
