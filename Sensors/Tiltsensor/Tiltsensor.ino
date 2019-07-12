

// pullup estado normal es 5

int pinInX = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinInX, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValX = digitalRead(pinInX);

  if(sensorValX)
  {
     Serial.println("bIEEEEEEN");
  }
  else
  {
     Serial.println("CHOCAOOOOOO");
  }

  Serial.println("sensorValX");
  Serial.println(sensorValX);
  Serial.println("--------------------------------");
}
