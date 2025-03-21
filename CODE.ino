// C++ code
//
int fwdPin = 6;
int revPin = 5;
void setup () {
  pinMode (fwdPin, OUTPUT);
  pinMode (revPin, OUTPUT);
}
void loop () {
  int tempIn = analogRead(A0);
  float voltage = tempIn *(5.0 / 1024.0);
  float temp = (voltage - 0.5) * 100;
  if (temp < 25) {
    analogWrite (fwdPin ,0);
  }
  else if (temp < 30) {
    analogWrite(fwdPin , 128);
  }
  else if (temp < 35) {
    analogWrite (fwdPin, 192);
  }
  else {
     analogWrite(fwdPin, 255);
  }
}