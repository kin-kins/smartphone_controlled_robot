void setup() 
{
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(11,OUTPUT); 

}
void forward()
{
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(11,0);
}
void stops()
{
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(11,0);
}

void left()
{
  digitalWrite(3,0);
  digitalWrite(5,1); 
  digitalWrite(6,1);
  digitalWrite(11,0);
}


void right()
{
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(11,1);
}
char c;

void loop() 
{ 
 c=Serial.read();
  
  if(c=='1')
  { 
forward();
Serial.println("f");
  }
  else if(c=='2')
 {
  left();
  
Serial.println("l");
 }
 else if(c=='3')
 {
  right();
  
Serial.println("R");
 }

 else if (c=='4')
 {
  stops();
  
Serial.println("s");
 }
 
}
