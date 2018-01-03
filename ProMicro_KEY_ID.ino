/*

  Written By: James Hussey
  For: Viking Machinery Ltd
  Date: 03/12/2017
  Version: 1.0 - Initial Release

  Description: A test file for the V1.4 Keybaord Shield, Helping find pin maps

  Notes:
  - V1.2 Emulator Board requires an external pullup resistor on pin 11. Planned fix for V1.3 (Production)
  - For basic operation, connect NO switch between input screw header and GND terminal.
  - Edit the commands under the "Send the Keystroke" header to change input function.

  Hardware available from www.vikingmachinery.co.nz

*/

#include <Keyboard.h>;

// Set up key names as characters so we can call them easily later

/*
  char leftArrow = KEY_LEFT_ARROW;
  char rightArrow = KEY_RIGHT_ARROW;
  char upArrow = KEY_UP_ARROW;
  char downArrow = KEY_DOWN_ARROW;
  char shiftKey = KEY_LEFT_SHIFT;
  char altKey = KEY_LEFT_ALT;
  char ctrlKey = KEY_LEFT_CTRL;
  char homeKey = KEY_HOME;
*/

// Set up statechange toggle variable

int buttonPressed = 0;
int buttonPressedLast = 0;

void setup() {
  // Make the pins all input, pullup
  // Note that we start at pin 2...
  // Note that Pin 14 is omitted for V1.2 and earlier boards


  pinMode(2, INPUT_PULLUP);     // Wire to 'INPUT 1'
  pinMode(3, INPUT_PULLUP);     // Wire to 'INPUT 2'
  pinMode(4, INPUT_PULLUP);     // Wire to 'INPUT 3'
  pinMode(5, INPUT_PULLUP);     // Wire to 'INPUT 4'
  pinMode(6, INPUT_PULLUP);     // Wire to 'INPUT 5'
  pinMode(7, INPUT_PULLUP);     // Wire to 'INPUT 6'
  pinMode(8, INPUT_PULLUP);     // Wire to 'INPUT 7'
  pinMode(9, INPUT_PULLUP);     // Wire to 'INPUT 8'
  pinMode(10, INPUT_PULLUP);    // Wire to 'INPUT 9'
  pinMode(16, INPUT_PULLUP);    // Wire to 'INPUT 10'
  pinMode(14, INPUT_PULLUP);    // Wire to 'INPUT 11'
  pinMode(15, INPUT_PULLUP);    // Wire to 'INPUT 12'
  pinMode(A0, INPUT_PULLUP);    // Wire to 'INPUT 13'
  pinMode(A1, INPUT_PULLUP);    // Wire to 'INPUT 14'
  pinMode(A2, INPUT_PULLUP);    // Wire to 'INPUT 15'
  pinMode(A3, INPUT_PULLUP);    // Wire to 'INPUT 16'




  // Launch Keyboard Control Function
  Keyboard.begin();
}

// The main program action happens in here:
void loop() {

  buttonPressed = 0;

  // Read the pushbutton on Input 1:
  if (digitalRead(2) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 1");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }

  // Read the pushbutton on Input 2:
  if (digitalRead(3) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 2");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }

  // Read the pushbutton on Input 3:
  if (digitalRead(4) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 3");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 4:
  if (digitalRead(5) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 4");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 5:
  if (digitalRead(6) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 5");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 6:
  if (digitalRead(7) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 6");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 7:
  if (digitalRead(8) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 7");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 8:
  if (digitalRead(9) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 8");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 9:
  if (digitalRead(10) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 9");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }

  // Read the pushbutton on Input 10:
  if (digitalRead(16) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 10");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 11:
  if (digitalRead(14) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 11");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }

  // Read the pushbutton on Input 12:
  if (digitalRead(15) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 12");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 13:
  if (digitalRead(A0) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 13");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 14:
  if (digitalRead(A1) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 14");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }

  // Read the pushbutton on Input 15:
  if (digitalRead(A2) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 15");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Read the pushbutton on Input 16:
  if (digitalRead(A3) == LOW) {
    //Send the keystrokes
    Keyboard.print("Input 16");
    Keyboard.write(224);
    delay(1000);
    buttonPressed = 1;
  }


  // Release all if your finger is off the inputs

  if (buttonPressedLast >  buttonPressed) {
    Keyboard.releaseAll();
    delay(50);
  }


  buttonPressedLast = buttonPressed;

}

/* And that's all folks! */
