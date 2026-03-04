
void setup()
{
  pinMode(13, OUTPUT);//13 or LED_BUILTIN
}

void loop()
{
  for(int i = 1; i<1000; i=i+100){
    	digitalWrite(13, HIGH);
    	delay(i);
    	digitalWrite(13, LOW);
    	delay(i);
  }
}