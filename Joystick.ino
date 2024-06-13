/*
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /        __________   _________   ___________   __________    _________                             /
   /       /___   ___/  /   _____/  /  _____   /  /  _____   \  /  ______/       \\            //      /
   /          /  /     /  /        /  /    /  /  /  /    /  /  /  /_____        \\             //      /
   /         /  /     /  /        /  /____/  /  /  /___/  /   /  ______/   \\\   \\    []    //   ///  /
   /     ___/  /__   /  /_____   /   ____   /  /   ___   \   /  /_____        \\\\--]]]/\[[[--////     /
   /    /________/  /________/  /__/    /__/  /__/    \__/  /________/         /////--][][--\\\\\      /
   /                                                                         //   //--][][--\\   \\    /
   /   ______________________________________________________________           //    ][][    \\       /
   /                                                                                                   /
   /                                                                                                   /
   /  This program is free software for arduino; you can redistribute it and/or modify.                /
   /  Ce programme pour Arduino est libre et gratuit; vous pouvez le distribuez et/ou le modifier.     /
   /                                                                                                   /
   / Another codes / Autres codes:                                                                     /
   / https://www.icaremaker.com                                                                        /
   / Mail: ionocraft@hotmail.fr                                                                        /
   /////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////////////////////////////////////////////////////////////////////
*/

#define JoyX_PIN  A0 // Connection sur l'arduino de JoyX pin
#define JoyY_PIN  A1 // Connection sur l'arduino de JoyY pin

int ValeurX = 0; // Valeur initiale de l'axe X
int ValeurY = 0; // Valeur initiale de l'axe Y

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  // Lire les valeurs analogiques X et Y 
  ValeurX = analogRead(JoyX_PIN);
  ValeurY = analogRead(JoyY_PIN);

  // Lire les valeurs sur le moniteur serie
  Serial.print("x = ");
  Serial.print(ValeurX);
  Serial.print(", y = ");
  Serial.println(ValeurY);
  delay(200);
}
