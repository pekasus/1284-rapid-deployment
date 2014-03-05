

const int pin = 19;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT_PULLUP);
}

void loop() {
  boolean state = digitalRead(pin);
  if (state == LOW) {
    Serial.print("Open");
    unsigned long time = millis();
    Serial.println(time);
    while(digitalRead(pin) == LOW) {
    }
    int timelapse = millis() - time;
    Serial.print("Closed");
    Serial.println(timelapse);
  }
  delay(300);
}
