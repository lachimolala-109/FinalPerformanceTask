#include <Servo.h>

#define RL1 13
#define RL2 12
#define YL1 11
#define YL2 10
#define GL1 9
#define GL2 8
#define SERVO1 7
#define SERVO2 6

// Servo objects
Servo myServo1;
Servo myServo2;

unsigned long currentMillis;
unsigned long previousMillis = 0;
const long redDuration = 30000; // 30 seconds
const long yellowDuration = 6000; // 6 seconds
const long greenDuration = 30000; // 30 seconds
int currentState = 0; // 0: Red, 1: Yellow, 2: Green
int interval = 1000; // Check every second

void setup() {
  // Serial setup
  Serial.begin(9600);

  // Initializing the pins as outputs/inputs
  pinMode(RL1, OUTPUT);
  pinMode(RL2, OUTPUT);
  pinMode(YL1, OUTPUT);
  pinMode(YL2, OUTPUT);
  pinMode(GL1, OUTPUT);
  pinMode(GL2, OUTPUT);

  // Attach the servo to the defined pin
  myServo1.attach(SERVO1);
  myServo2.attach(SERVO2);
}

void loop() {
  // Update traffic lights
  currentMillis = millis();

  moveServo();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    updateTrafficLights();
  }
}
