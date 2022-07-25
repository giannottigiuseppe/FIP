int box1 = 2;
int box2 = 4;
int box3 = 7;
int box4 = 8;

char TTL[7] = {"0,0,0,0"};

void setup() {
  Serial.begin(9600);
  pinMode(box1, INPUT);
  pinMode(box2, INPUT);
  pinMode(box3, INPUT);
  pinMode(box4, INPUT);
}

void substituteChars(char source[], char destination[], byte startAt, byte length) {
  for (int pos = 0; pos < length; pos++) {
    destination[startAt + pos] = source[pos];
  }
}

void loop() {
  Serial.print(TTL);
  Serial.print('\n');
  if (digitalRead (box1) == HIGH) {
    substituteChars("1", TTL , 0, 1);
  }
  else{
    substituteChars("0", TTL , 0, 1);
  }
  
  if (digitalRead (box2) == HIGH) {
    substituteChars("1", TTL , 2, 1);
  }
  else{
    substituteChars("0", TTL , 2, 1);
  }
  
  if (digitalRead (box3) == HIGH) {
    substituteChars("1", TTL , 4, 1);
  }
  else{
    substituteChars("0", TTL , 4, 1);
  }
  
  if (digitalRead (box4) == HIGH) {
    substituteChars("1", TTL , 6, 1);
  }
  else{
    substituteChars("0", TTL , 6, 1);
  }
}
