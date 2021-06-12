const int led=3; // constant variable which defines the pin number

void setup() 
{
  pinMode(led, OUTPUT);  // LED is an OUTPUT it OUTPUTS light
}

void loop() 
{
   int senzor = analogRead(A0); // Read the value of the sensor 
  if (senzor < 10)// At the value 10 do something (turn on led in this case) 
    { 
      digitalWrite(led, HIGH);  //LED ON
    }
  else
    {
      digitalWrite(led,LOW);  //Otherwise there is light present in the room the diode is OFF
    }

}
