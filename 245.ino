const buzzer = 19; 
#define pot = 15;

void setup() {
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int analogValue = analogRead(pot);
  int brightness = map(analogValue, 0, 4095, 0, 255);
  if (brightness > 200) {
    Serial.println("decrease the volume ");
    digitalWrite(buzzer, HIGH);
    delay(100);
  }
  digitalWrite(buzzer, LOW);
  Serial.println(brightness);
  delay(30);
}
