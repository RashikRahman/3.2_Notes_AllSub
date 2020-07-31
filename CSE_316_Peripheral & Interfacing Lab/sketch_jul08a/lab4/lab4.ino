void Transfer(int x);
void Not(int x);

void setup() {
  // put your setup code here, to run once:
  pinMode(1, INPUT); //set the input pin
  pinMode(2, INPUT); //set the switch or control pin for transfer, not operation
  pinMode(13, OUTPUT); //set the output pin

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(1);
  int control = digitalRead(2);

  if (control == HIGH)
    Transfer(value);
  else
    Not(value);

}


void Transfer(int x) {
  if (x == HIGH)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
}
void Not(int x){
  if (x == HIGH)
    digitalWrite(13, LOW);
  else
    digitalWrite(13, HIGH);
}
