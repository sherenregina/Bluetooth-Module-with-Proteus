int ml=A0; //motor DC dihubungkan ke pin analog A0 arduino
int h=255; // 5 volt 
int l=0; // 0 volt
String motion;

void setup() {
  Serial.begin(9600);
  pinMode(ml,OUTPUT);
}

void loop() {
  Serial.println("silahkan ketik 'p' untuk memutar, 's' untuk berhenti");
  while(Serial.available()==0){ }

  motion=Serial.readString();
  if(motion=="p"){
    analogWrite(ml,l);
  }
  
  if(motion=="s"){
    analogWrite(ml,h);
  }
}
