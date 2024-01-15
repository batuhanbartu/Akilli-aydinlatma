int led=3;

void setup()
{
Serial.begin(9600);
pinMode (led, OUTPUT);
}

void loop()
{
  int ldr_sensor_deger=analogRead(A0);
  Serial.println(ldr sensor_deger);

if (ldr_sensor_deger<=250)
{
  digitalWrite(led, HIGH);
}

else
{
  digitalWrite(led, LOW);
}

delay(500);
}