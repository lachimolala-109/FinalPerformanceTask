void updateTrafficLights() {
  switch (currentState) {
    case 0: // Red
      digitalWrite(RL1, HIGH);
      digitalWrite(RL2, HIGH);
      delay(redDuration);
      digitalWrite(RL1, LOW);
      digitalWrite(RL2, LOW);
      currentState = 1; // Switch to Yellow
      break;
      
    case 1: // Yellow
      digitalWrite(YL1, HIGH);
      digitalWrite(YL2, HIGH);
      delay(yellowDuration);
      digitalWrite(YL1, LOW);
      digitalWrite(YL2, LOW);
      currentState = 2; // Switch to Green
      break;
      
    case 2: // Green
      digitalWrite(GL1, HIGH);
      digitalWrite(GL2, HIGH);
      delay(greenDuration);
      digitalWrite(GL1, LOW);
      digitalWrite(GL2, LOW);
      currentState = 0; // Switch to Red
      break;
  }
}