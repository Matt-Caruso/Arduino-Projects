//1.8.20
//LED on/off w buttons 

int ledPin = 5;
int buttonOnPin = 8;
int buttonOffPin = 9;

void setup()
{
 pinMode(ledPin, OUTPUT);
 pinMode(buttonOnPin, INPUT_PULLUP);
 pinMode(buttonOffPin, INPUT_PULLUP);
}

void loop() 
{
 if (digitalRead(buttonOnPin) == LOW)
 {
     digitalWrite(ledPin, HIGH);
 }
  if(digitalRead(buttonOffPin) == LOW)
  {
     digitalWrite(ledPin, LOW); 
  }
 }
