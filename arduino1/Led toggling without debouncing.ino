const int LED = 9;
const int BUTTON = 2;

bool lastButtonState = LOW;
bool ledState = LOW;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  bool currentButtonState = digitalRead(BUTTON);

  // Detect button press (rising edge)
  if (currentButtonState == HIGH && lastButtonState == LOW)
  {
    ledState = !ledState;          // Toggle LED state
    digitalWrite(LED, ledState);   // Update LED
  }

  lastButtonState = currentButtonState;  // Save state
}