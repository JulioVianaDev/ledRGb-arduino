void setup() {
  // put your setup code here, to run once:
  pinMode(6,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,0);
}
