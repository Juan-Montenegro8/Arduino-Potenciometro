int ledg=9;
int ledr = 10;
long valor;

void setup() {
  Serial.begin(9600);
  Serial.println("inicio");

}

void loop() {
  valor = analogRead(A0);
  int redVal = map (valor,0,1023,0,205);
  int greVal = map (valor,0,1023,205,0);
  analogWrite(ledr,redVal);
  analogWrite(ledg,greVal);
  Serial.print((valor)*1.023);
  Serial.println(" ohm");
  delay(1000);

}
