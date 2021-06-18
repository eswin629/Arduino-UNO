// pin 9 trigger 
// pin 10 echo 
const int pTrig = 9; 
const int pEcho = 10;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);   
 pinMode(pTrig, OUTPUT);   
 pinMode(pEcho, INPUT); 
}
long durasi = 0; 

void loop() {
  // put your main code here, to run repeatedly:
 // trigger selama 10us   
 digitalWrite(pTrig, HIGH);   
 delayMicroseconds(10);   
 digitalWrite(pTrig, LOW);      
 durasi = pulseIn(pEcho, HIGH);   
 Serial.print("Durasi: ");   
 Serial.print(durasi);      
 Serial.print(", Jarak: ");   
 Serial.println((durasi *0.034)/2);   
 delay(1000);
}
