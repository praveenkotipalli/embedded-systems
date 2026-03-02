
const int TMP = 0;
int val = 0;

const int RED = 11;
const int BLUE = 10;
const int GREEN = 9;

void setup(){
	Serial.begin(9600);
}

void loop(){
 	val = analogRead(TMP);
  
  	if(val < 148){
    	digitalWrite(RED, HIGH);
      	digitalWrite(BLUE, LOW);
      	digitalWrite(GREEN, HIGH);
    }else if(val>158){
     	digitalWrite(RED, LOW);
      	digitalWrite(BLUE, HIGH);
      	digitalWrite(GREEN, HIGH);
    }else{
     	digitalWrite(RED, HIGH);
      	digitalWrite(BLUE, HIGH);
      	digitalWrite(GREEN, LOW);
    }
  
  
  
  	Serial.println(val);
	/*
		i getting 153,
		so..153/1023 X 5000mV = 747mV
		
		Temperature(°C)=(Voltage(mV)−500)/10 = 24 or 25
 	*/
}