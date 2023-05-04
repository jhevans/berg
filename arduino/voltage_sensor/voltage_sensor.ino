
const int voltageSensor = A0;

float vOUT = 0.0;
float vIN = 0.0;
float R1 = 30000.0;
float R2 = 7500.0;
// This is the Arduino operating Voltage
float vSys = 5.0;
int value = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Measuring voltage...");
}

void loop() {
  value = analogRead(voltageSensor);
  vOUT = (value * vSys) / 1024.0;
  vIN = vOUT / (R2/(R1+R2));
  Serial.print("Voltage  = ");
  Serial.println(vIN);
  delay(500);
}
