

// pullup estado normal es 5

int pinIn = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinIn, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(pinIn);
  Serial.println(sensorVal);
}
