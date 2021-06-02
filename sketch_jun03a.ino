void setup() {

for(int i = 2; i <= 10; i++)
  pinMode(i, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  digitalWrite(A0,1);
  digitalWrite(A1,0);
  digitalWrite(A2,1);
  digitalWrite(A0,0);
  digitalWrite(A1,1);
  digitalWrite(A2,0);
  digitalWrite(A0,1);
  digitalWrite(A1,1);
  digitalWrite(A2,1);
}

int i;

void loop() {
  for(i=2; i<=10; i++) 
  {
    digitalWrite(i,0); // on
    delay(100);
  }
  for(i=2; i<=10; i++) 
  {
    digitalWrite(i,1); // off
    delay(100);
  }  
  digitalWrite(A0,1);
  digitalWrite(A1,1);
  digitalWrite(A2,1);
  digitalWrite(A0,0);
  digitalWrite(A1,0);
  digitalWrite(A2,0);
  
}
