void Transfer(int b);
void Not(int b);

void setup() {
  // put your setup code here, to run once:
  pinMode (0, INPUT);
  pinMode (1, INPUT);
  pinMode(4, INPUT); // If high then do transfer else not
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

  int a = digitalRead(0);
  int b = digitalRead(1);
  int c = digitalRead(4);

  if (c == HIGH) {
    Transfer(a);
  }
  else {
    Not(b);
  }
}

void Transfer(int b) {
  if (b == HIGH)
  {
    digitalWrite(13, HIGH);

  }
  else
  {
    digitalWrite(13, LOW);
  }

}

void Not(int a) {
  if (a == HIGH)
  {
    digitalWrite(12, LOW);

  }
  else
  {
    digitalWrite(12, HIGH);
  }
}
