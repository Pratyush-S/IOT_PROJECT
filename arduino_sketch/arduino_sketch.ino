void setup() {
  pinMode(A0,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
Serial.begin(9600);
}
void lightson(void){
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  }
 
 void lightsoff(void){
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  }


void loop() {
int a=0,cal=0,i;
 
for(i=0;i<4;i++){
  
  a=analogRead(A0);
  Serial.println(a);  
  cal=cal+a;
  delay(250);
  }
  cal=cal/4;



if(cal<270){
  lightson();
  Serial.println("lights on");
}
else{
  lightsoff();
  Serial.println("lights off");
}
}

