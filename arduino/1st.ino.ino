int a=A1;
int x;
void setup() {
  pinMode(a,INPUT) ;
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() 
{
  x=analogRead(a);
 
  Serial.println(x);
 
  //Serial.println(x);
//Serial.print("Y reading:");
 // Serial.print(y);
//Serial.print("Z reading: ");
//  Serial.print(z);
 delay(100);
  
  // put your main code here, to run repeatedly:

  
}
