int potPin=A0;
void setup() {
 // put your setup code here, to run 
once:
Serial.begin(9600);
Serial.println("Analog input okuma 
örneği");
}
void loop() {
 // put your main code here, to run 
repeatedly:
int deger=analogRead(potPin);
Serial.println(deger);
delay(100);
}