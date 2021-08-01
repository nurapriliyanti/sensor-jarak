//int ledpin = D5;
int trigpin = D4;
int echopin = D3;

float durasi, jarak;

void setup() {
  // put your setup code here, to run once:
Serial.begin (115200);
//pinMode (ledpin, OUTPUT);
pinMode (trigpin, OUTPUT);
pinMode (echopin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (trigpin, HIGH);
  delayMicroseconds (100);
  digitalWrite (trigpin, LOW);
  durasi = pulseIn (echopin, HIGH);
  jarak = (durasi/2) / 29.1;
  Serial.println (jarak);

if (jarak >=0 && jarak <=15)
{
  //digitalWrite (ledpin, HIGH);
  Serial.println ("URGENT");
  //}
//else {
  //digitalWrite (ledpin, LOW);
}
}
