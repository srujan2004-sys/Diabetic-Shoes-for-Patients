D
#define fsrpin1 A3
#define fsrpin2 A4
#define fsrpin3 A2
#define fsrpin4 A6
#define fsrpin5 A7
#define relay 2

int fsrreading1,fsrreading2,fsrreading3,fsrreading4,fsrreading5; 

void setup() {
  Serial.begin(9600);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
  pinMode(relay,OUTPUT);      
  digitalWrite(relay,HIGH);
}
void loop() {

  fsrreading1 = analogRead(A3);
  int fsr1 =map(fsrreading1,0,1023,0,100);
  fsrreading2 = analogRead(A4);
  int fsr2 =map(fsrreading2,0,1023,0,100);
  fsrreading3 = analogRead(A5);
  int fsr3 =map(fsrreading3,0,1023,0,100);
  fsrreading4 = analogRead(A6);
  int fsr4 =map(fsrreading4,0,1023,0,100);
  fsrreading5 = analogRead(A7);
  int fsr5 =map(fsrreading5,0,1023,0,100);

  if (Serial.available()>0){
    char c = Serial.read();
    if (c=='1'){
      digitalWrite(relay,LOW);
    }else if (c=='2'){
      digitalWrite(relay,HIGH);
    }
  }

  Serial.print(String(fsr1)+"#"+String(fsr2)+"#"+String(fsr3)+"#"+String(fsr4)+"#"+String(fsr5));
  Serial.println();
  delay(1000); 
}
