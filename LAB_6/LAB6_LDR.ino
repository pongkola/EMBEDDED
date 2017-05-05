int sensorPin = A0;
int sensorValue = 0;
void setup() {
 pinMode(12, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 sensorValue = analogRead(sensorPin);
 Serial.println(sensorValue);
 if(sensorValue < 500)
digitalWrite(12,HIGH);
else digitalWrite(12,LOW);
delay(100);
}
