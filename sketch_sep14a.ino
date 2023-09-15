void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
  String command = Serial.readStringUntil('\n');
  command.trim();
  if (command.equals("A")) {
    int i = 0;
    while (i < 10){
    digitalWrite(9 , HIGH);
    tone(9,400,500);
    digitalWrite(8 , HIGH);
    delay(500);
    digitalWrite(8 , LOW);
    delay(500);
    digitalWrite(9 , LOW);
    i++;
   }

  }
  }
}
