void updateTrafficLights() {
  // Update state for set 1
  if (state1 == 0) {
    digitalWrite(RL1, HIGH);
    digitalWrite(YL1, LOW);
    digitalWrite(GL1, HIGH);
    delay(redDuration);
    state1 = 1;
  } else if (state1 == 1) {
    digitalWrite(RL1, LOW);
    digitalWrite(YL1, HIGH);
    digitalWrite(GL1, LOW);
    delay(yellowDuration);
    state1 = 2;
  } else if (state1 == 2) {
    digitalWrite(RL1, LOW);
    digitalWrite(YL1, LOW);
    digitalWrite(GL1, HIGH);
    delay(greenDuration);
    state1 = 0;
  }

  // Update state for set 2
  if (state2 == 0) {
    digitalWrite(RL2, HIGH);
    digitalWrite(YL2, LOW);
    digitalWrite(GL2, LOW);
    delay(redDuration);
    state2 = 1;
  } else if (state2 == 1) {
    digitalWrite(RL2, LOW);
    digitalWrite(YL2, HIGH);
    digitalWrite(GL2, LOW);
    delay(yellowDuration);
    state2 = 2;
  } else if (state2 == 2) {
    digitalWrite(RL2, LOW);
    digitalWrite(YL2, LOW);
    digitalWrite(GL2, HIGH);
    delay(greenDuration);
    state2 = 0;
  }
}