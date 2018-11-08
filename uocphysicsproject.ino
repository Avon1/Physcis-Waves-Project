//RC circuits graph of capacitor charging and discharging
const int pin = 2;
const int pin2 = 4;
void setup() {
Serial.begin(115200);
pinMode(pin,OUTPUT);
pinMode(pin2,OUTPUT);
digitalWrite(pin,LOW);
digitalWrite(pin2,LOW);
delay(1000);
}
//range
void highlow(float h,float l,float v){
  if(v >= h ){
    digitalWrite(pin,LOW);
  }
  if(v <= l){
    digitalWrite(pin,HIGH);
  }
}
void highlow2(float h,float l,float v){
  if(v >= h ){
    digitalWrite(pin2,LOW);
  }
  if(v <= l){
    digitalWrite(pin2,HIGH);
  }
}
void loop() {
int reading = analogRead(A0);
int reading2 = analogRead(A1);
double v = (reading/1023.00)*5.00;
double v2 = (reading2/1023.00)*5.00;
highlow((5.00),(0.00),v);
highlow2((5.00),(0.00),v2);
Serial.println(String(v)+","+String(v2));
delay(10);
}
