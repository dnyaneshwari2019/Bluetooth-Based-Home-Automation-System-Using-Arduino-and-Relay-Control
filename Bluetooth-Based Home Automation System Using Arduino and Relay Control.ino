// Components to use Bluetooth(HC-05), Relay (Quantity - 4), Arduino UNO.

// Condition 1: When Controller receive A from BLE it will Switch ON Relay1.

// Condition 2: When Controller receive B from BLE it will Switch ON Relay2.

// Condition 3: When Controller receive C from BLE it will Switch ON Relay3.

// Condition 4: When Controller receive D from BLE it will Switch ON Relay4.
int x;
void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
}

void loop() {
  while(Serial.available()>0)
  {
    x=Serial.read();
    if(x=='A')
    {
      digitalWrite(6,LOW);
    }
    if(x=='B')
    {
      digitalWrite(7,LOW);
    }
    if(x=='C')
    {
      digitalWrite(8,LOW);
    }
    if(x=='D')
    {
      digitalWrite(9,LOW);
    }
    if(x=='E')
    {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
    }   
  }

}
