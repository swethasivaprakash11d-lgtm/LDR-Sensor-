int ldrPin = A0;
int ledPin = 13;
int ldrValue = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrValue = analogRead(ldrPin);
  if(ldrValue < 500){
    digitalWrite(ledPin, HIGH);
    Serial.print("Night");
  } else{
    digitalWrite(ledPin, LOW);
    Serial.println("Day");
  }
}
