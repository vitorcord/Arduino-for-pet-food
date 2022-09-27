/Sensor de peso que acende uma série de LEDs dependendo do peso e exibe uma mensagem no
Serial Monitor/
// Definimos os pinos dos LEDS e do sensor:
#define pinFSR A0
#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
// Definimos as variáveis:
int resultsFSR;
void setup() {
 // Habilitamos a porta serial:
 Serial.begin(9600);
 // Colocamos os pinos dos LEDs como OUTPUT:
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
}
void loop() {
 // Lendo o pino FSR e salvando o resultado:
 resultsFSR = analogRead(pinFSR);
 // Mostramos o resultado no Serial Monitor 
Serial.print("Lectura = ");
 Serial.print(resultsFSR);
 // Ligamos os LEDs dependendo do valor e mostramos uma mensagem no monitor serial:
 if (resultsFSR < 10) {
 Serial.println(" - Cero");
 }
 if (resultsFSR > 75) {
 digitalWrite(led1, HIGH);
 if (resultsFSR < 149) {
 Serial.println(" - Liviano");
 }
 }
 else digitalWrite(led1, LOW);
 if (resultsFSR > 150) {
 digitalWrite(led2, HIGH);
 if (resultsFSR < 224) {
 Serial.println(" - Liviano");
 }
 }
 else digitalWrite(led2, LOW);
 if (resultsFSR > 225) {
 digitalWrite(led3, HIGH);
 if (resultsFSR < 299) {
 Serial.println(" - Normal");
 }
 }
 else digitalWrite(led3, LOW);
 if (resultsFSR > 300) {
 digitalWrite(led4, HIGH);
 if (resultsFSR < 374) {
 Serial.println(" - Normal");
 }
 }
 else digitalWrite(led4, LOW);
 if (resultsFSR > 375) {
 digitalWrite(led5, HIGH);
 if (resultsFSR < 449) {
 Serial.println(" - Pesado");
 }
 }
 else digitalWrite(led5, LOW);
 if (resultsFSR > 450) {
 digitalWrite(led6, HIGH);
 Serial.println(" - pesado");
 }
 else digitalWrite(led6, LOW);
}