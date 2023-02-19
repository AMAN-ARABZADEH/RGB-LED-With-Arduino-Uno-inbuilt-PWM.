// Pins for RGB LED
const int redPin = 3;
const int greenPin = 5;
const int bluePin = 6;
// This code only works for Arduino Uno dues to
// It has PWM installed in it pins. PWM helps 
/*
it is usually necessary to use Pulse Width Modulation (PWM) to control an RGB LED and create different colors by varying the intensity of red, green and blue light. PWM makes it possible to simulate an analog signal by rapidly switching a digital signal between on and off states at different intervals, which in turn controls the amount of current directed to each color of the RGB LED.
*/

void setup() {
  // Set pin modes
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

// Set values
void setRGB(int red, int green, int blue) {
  analogWrite(redPin, red); //red
 	analogWrite(greenPin, green); // green
  analogWrite(bluePin, blue); // blue
  
}

void loop() {
      

    // Set up the values
    setRGB(0, 255, 255); // purple

  
  delay(1000); // Wait for 1 second
}


// This loop prints all possible RGB color which is aproximitly 17 milions colors 255 ^3.
/*
The total number of iterations in the loop would be 256 x 256 x 256 = 16,777,216. The time complexity of this loop is O(N^3), where N = 256, since there are three nested loops that iterate up to 256. This means that the time required to complete the loop increases exponentially with the number of iterations, which could be a concern for larger values of N.
*/


// void loop() {
//   // Loop through all possible combinations of red, green, and blue PWM values
//   for (int r = 102; r < 256; r++) {
//     for (int g = 202; g < 256; g++) {
//       for (int b = 0; b < 256; b++) {
//         analogWrite(redPin, r);
//         analogWrite(greenPin, g);
//         analogWrite(bluePin, b);
//         delay(10); // adjust delay time as needed
//       }
//     }
//   }
// }