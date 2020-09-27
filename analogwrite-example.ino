// connect the LED to any I/0 pin
#define red D1 
// connect the ground pin to gnd
// I am using a rgb LED module here
void setup() {
  // put your setup code here, to run once:
  pinMode(D1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int power = 0; power<1024; power+= 1023/3) //loop to control power
  {
    analogWrite(D1,power);
    delay(1000);
  }
}
