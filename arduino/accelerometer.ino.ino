int a = A1;
int x, y,z;
int b = A2 ;

int c = A3 ;
void setup() {
  pinMode(a, INPUT) ;
  pinMode(b, INPUT);
 pinMode(c, INPUT) ;
  Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {
  x = analogRead(a);
  y = analogRead(b);
  z = analogRead(c);
  Serial.print(" X reading:\t");
  Serial.println(x);
  // delay(1000) ;
  Serial.print("Y reading: \t");
  Serial.println(y);
  //delay(1000) ;
  Serial.print("Z reading: \t ");
  Serial.println(z);
   delay(1000) ;

  


  // put your main code here, to run repeatedly:


}
