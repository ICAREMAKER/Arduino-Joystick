# Arduino-Joystick ![arduinoThumb](https://github.com/ICAREMAKER/Arduino-Joystick/assets/107696317/67612c61-e604-421f-aad0-09c4682e8026) ![C++-Logo wine](https://github.com/ICAREMAKER/Arduino-Joystick/assets/107696317/26bac965-a9c8-4bb2-8c40-aaca1e19b7a5)



## Code
```C
#define JoyX_PIN  A0 // Connection sur l'arduino de JoyX pin
#define JoyY_PIN  A1 // Connection sur l'arduino de JoyY pin

int ValeurX = 0; // Valeur initiale de l'axe X
int ValeurY = 0; // Valeur initiale de l'axe Y

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  // Lire les valeurs analogiques X et Y 
  xValue = analogRead(JoyX_PIN);
  yValue = analogRead(JoyY_PIN);

  // Lire les valeurs sur le moniteur serie
  Serial.print("x = ");
  Serial.print(ValeurX);
  Serial.print(", y = ");
  Serial.println(ValeurY);
  delay(200);
}
```
