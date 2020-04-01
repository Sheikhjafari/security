void setup()
{
  Serial.begin(9600);
  analogWrite(D3, 0);
}

int val;
void loop()
{
    val=analogRead(A0);
    Serial.println(val);
    if(val>300){
         analogWrite(D3, 500);
         delay(100);
         analogWrite(D3, 100);
         delay(100);     
    }
    analogWrite(D3, 0);
}
