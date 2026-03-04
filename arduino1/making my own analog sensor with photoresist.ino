

// Automatic Night Light

const int WLED=9;        // White LED Anode on pin 9 (PWM)
const int LIGHT=0;       // Light Sensor on Analog Pin 0
const int MIN_LIGHT=200; // Minimum Expected light value
const int MAX_LIGHT=900; // Maximum Expected Light value
int val = 0;             // Variable to hold the analog reading

void setup()
{
  pinMode(WLED, OUTPUT); // Set White LED pin as output
}

void loop()
{
  val = analogRead(LIGHT);                      // Read the light sensor
  val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0); // Map the light reading
  val = constrain(val, 0, 255);                 // Constrain light value
  analogWrite(WLED, val);                       // Control the White LED
}



/*
Using Variable Resistors to Make Your Own Analog Sensors

Thanks to physics, tons of devices change resistance
as a result of physical action. For example, some
conductive inks change resistance when squished or
flexed (force sensors and flex sensors), some
semiconductors change resistance when struck by
light (photoresistors), and some polymers change
resistance when heated or cooled (thermistors). These
are just a few examples of components that you can
take advantage of to build your own analog sensors.
Because these sensors are changing resistance and
not voltage, you need to create a voltage divider
circuit so that you can measure their resistance
change.

*/

/*
USING RESISTIVE VOLTAGE DIVIDERS

A resistive voltage divider uses two resistors to output
a voltage that is some fraction of the input voltage.
The output voltage is a function directly related to the
value of the two resistors. So, if one of the resistors is
a variable resistor, you can monitor the change in
voltage from the voltage divider that results from the
varying resistance. The size of the other resistor can
be used to set the sensitivity of the circuit, or you can
use a potentiometer to make the sensitivity adjustable.

*/


/*
USING ANALOG INPUTS TO CONTROL
ANALOG OUTPUTS


Recall that you can use the analogWrite() command to
set the brightness of an LED. However, it is an 8-bit
value; that is, it accepts values between 0 and 255
only, whereas the ADC is returning values as high as
1023. Conveniently, the Arduino programming
language has two functions that are useful for
mapping between two sets of values: the map() and
constrain() functions. The map() function looks like this:

output = map(value, fromLow, fromHigh, toLow, toHigh)

value is the information you are starting with. In your
case, that's the most recent reading from the analog
input. fromLow and fromHigh are the input boundaries.
These are values you found to correspond to the
minimum and maximum brightness in your room. In
my case, they were 200 and 900. toLow and toHigh are
the values you want to map the brightness values to.
Because analogWrite() expects a value between 0 and
255, you use those values. However, you want a darker
room to map to a brighter LED. Therefore, when the
input from the ADC is a low value, you want the output
to the LED's PWM pin to be a high value, and vice
versa.
Conveniently, the map function can handle this
automatically; simply swap the high and low values so
that the low value is 255 and the high value is 0. The
map() function creates a linear mapping. For example,
if your fromLow and fromHigh values are 200 and 900,
respectively, and your toLow and toHigh values are 255
and 0, respectively, 550 maps to 127 because 550 is
halfway between 200 and 900 and 127 is halfway
between 255 and 0. Importantly, however, the map()
function does not constrain these values. So, if the
photoresistor does measure a value below 200, it is
mapped to a value above 255 (because you are
inverting the mapping). Obviously, you don't want that
because you can't pass a value greater than 255 to the
analogWrite() function. You can deal with this by using
the constrain() function. The constrain() function looks
like this:

output = constrain(value, min, max)

If you pass the output from the map function into the
constrain function, you can set the min to 0 and the max
to 255, ensuring that any numbers above or below
those values are constrained to either 0 or 255.
Finally, you can then use those values to command
your LED!