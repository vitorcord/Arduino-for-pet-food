// C++ code
//
int nivelUmidade = 0;
void setup()
{
 pinMode(A0, INPUT);
 Serial.begin(9600);
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
}
void loop()
{
 nivelUmidade = (-40 + 0.488155 * (analogRead(A0) - 20));
 Serial.println(nivelUmidade);
 if (nivelUmidade <= 0) {
 digitalWrite(13, HIGH);
 digitalWrite(12, LOW);
 digitalWrite(11, LOW);
 } else {
 if (nivelUmidade > 0 && nivelUmidade < 187) {
 digitalWrite(13, LOW);
 digitalWrite(12, HIGH);
 digitalWrite(11, LOW);
 } else {
 digitalWrite(13, LOW);
 digitalWrite(12, LOW);
 digitalWrite(11, HIGH);
 }
 }
 delay(10); // Atrasar um pouco para melhorar o desempenho da simulação
}