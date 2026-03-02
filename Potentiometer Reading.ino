const int POT = 0;
int val = 0;

void setup(){
  Serial.begin(9600); //Initialize (start) serial communication at 9600 bits per second
/*Serial.begin() takes
one argument that specifies the communication speed,
or baud rate. The baud rate specifies the number of
bits being transferred per second
	*/
}

void loop(){
  val = analogRead(POT); // It will read the analog values from the Potentiometer
  Serial.println(val); // It will print the values from the arduino in computer 
}



/*
DIGITAL signals, are discrete, binary (0s and 1s) signals representing data as square waves, 
offering higher speed, stability, and immunity to noise
*/

/*
ANALOG signals, are continuous, variable waveforms representing data as, for example, sound or 
temperature, making them highly detailed but prone to noise
*/



/*
To convert a digital signal to an analog one with an Arduino, you can use one of the following 
methods, depending on your board and application: using Pulse Width Modulation (PWM), employing 
an external Digital-to-Analog Converter (DAC) chip, or building a custom resistor-based DAC circuit.


->Hardware: Use digital pins marked with a tilde (~) (e.g., pins 3, 5, 6, 9, 10, and 11 on most boards).
->Code: Use the analogWrite(pin, value) function.
	- pin is the PWM-enabled digital pin number.
	- value is a number from 0 (always off, 0V average) to 255 (always on, 5V average).


*/



/*
In Arduino, analog to digital conversion (ADC) is already built-in.
You don’t manually convert it — you use analogRead().
*/


