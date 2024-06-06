#define RL1 13
#define RL2 12
#define YL1 11
#define YL2 10
#define GL1 9
#define GL2 8

unsigned long previousMillis = 0;
const long interval = 3000; // Interval in milliseconds

int state1 = 0; // 0: red, 1: yellow, 2: green
int state2 = 2; // 0: red, 1: yellow, 2: green

const unsigned long redDuration = 36000; // 36 seconds
const unsigned long yellowDuration = 6000; // 6 seconds
const unsigned long greenDuration = 20000; // 20 seconds

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
}

void loop() {
  // Blink test 1
  digitalWrite(RL1, HIGH);
  digitalWrite(RL2, HIGH);
  delay(1000);
  digitalWrite(RL1, LOW);
  digitalWrite(RL2, LOW);
  digitalWrite(YL1, HIGH);
  digitalWrite(YL2, HIGH);
  delay(1000);
  digitalWrite(YL1, LOW);
  digitalWrite(YL2, LOW);
  digitalWrite(GL1, HIGH);
  digitalWrite(GL2, HIGH);
  delay(1000);
  digitalWrite(GL1, LOW);
  digitalWrite(GL2, LOW);

//   // Update the traffic lights
//   unsigned long currentMillis = millis();

//   if (currentMillis - previousMillis >= interval) {
//     previousMillis = currentMillis;
//     updateTrafficLights();
// }
}
