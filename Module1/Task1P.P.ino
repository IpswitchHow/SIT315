/* Based very heavily off the public domain example button code
 * Not going to deny that or anything, these simple sensors are
 * basically just example code level
*/

const int buttonPin = 2;

int buttonState;
bool formerButtonState = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (formerButtonState == false) {
      Serial.println("Button pushed");
      formerButtonState = true;
    }
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    if (formerButtonState == true) {
      Serial.println("Button released");
      formerButtonState = false;
    }
  }
}
