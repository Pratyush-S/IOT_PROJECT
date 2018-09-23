void setup() {

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int a=0,w,x,y,z;
  if (Serial.available()) 
  {
    a = Serial.read()-'0';
  }
if(a==4)w=1;
else if(a==5)x=1;
else if(a==6)y=1;
else if(a==7)z=1;
else  {
  x=0;
  w=y=z=x;
  }
digitalWrite(4,w);
digitalWrite(5,x);
digitalWrite(6,y);
digitalWrite(7,z);
delay(200);

Serial.println(a);
}

