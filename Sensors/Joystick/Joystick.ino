

// pullup estado normal es 5

int pinInX = A0;
int pinInY = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinInX, INPUT);
  pinMode(pinInY, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValX = analogRead(pinInX);
  int sensorValY = analogRead(pinInY);


  Serial.println("sensorValX");
  Serial.println(sensorValX);
  Serial.println("sensorValY");
  Serial.println(sensorValY);
 
  Serial.println("------------------------------");
  
  delay(1000);
}
