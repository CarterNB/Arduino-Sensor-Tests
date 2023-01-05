#define LED 13
#define TILT 2


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(TILT, INPUT_PULLUP);
  digitalWrite(LED, LOW);
  }

void loop() {
  int read=digitalRead(TILT);

  if(read==HIGH)
  digitalWrite(LED,HIGH);
  if(read==LOW)
  digitalWrite(LED,LOW);
}
