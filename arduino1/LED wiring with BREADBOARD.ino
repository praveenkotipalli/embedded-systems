
//LED is a diode, as all other diodes, LED is polarized.
//means how you connect it will matters
//ANODE should connect to the power supply
//CATHODE should connect to the ground


//resistor is used to limit the current, so the LED will not burn out due to high flow of current
//and resisotor is not ploarized, so resistor can be nserted in series on either side of the LED 




void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1000); 
  digitalWrite(9, LOW);
  delay(1000); 

}

/*
breadboard is a simple prototyping tool
that allows you to easily wire up simple circuits
without having to solder together parts to a customprinted circuit board
*/



/*
All
the BLUE pins are electrically connected and are used
for the GROUND BUS
*/



/*All the RED pins are
electrically connected, and are generally used for
providing power
*/



/*
All the vertically aligned pins are
also connected in rows, with a division in the middle to
make it easy to mount integrated circuits (ICs) on the
breadboard
*/


