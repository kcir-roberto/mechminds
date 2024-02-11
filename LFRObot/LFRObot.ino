// Define IR sensor pins
#define IR_SENSOR_RIGHT 13
#define IR_SENSOR_LEFT 12

// Define motor speeds
#define MOTOR_SPEED 110
#define MOTOR_SPEED1 90
#define MOTOR_SPEED2 130

// Define ultrasonic sensor pins
#define echo A2    // Echo pin
#define trigger A3 // Trigger pin

// Define servo pin
#define servo A5

// Define right motor pins
int enableRightMotor = 10;
int rightMotorPin1 = 9;
int rightMotorPin2 = 8;

// Define left motor pins
int enableLeftMotor = 5;
int leftMotorPin1 = 7;
int leftMotorPin2 = 6;

// Define obstacle detection parameters
int Set = 20;
int Speed = 100;
int distance_L, distance_F, distance_R; 

//**********************Initializer****************************
void setup()
{
  //The problem with TT gear motors is that, at very low pwm value it does not even rotate.
  //If we increase the PWM value then it rotates faster and our robot is not controlled in that speed and goes out of line.
  //For that we need to increase the frequency of analogWrite.
  //Below line is important to change the frequency of PWM signal on pin D5 and D6
  //Because of this, motor runs in controlled manner (lower speed) at high PWM value.
  //This sets frequecny as 7812.5 hz.
  TCCR0B = TCCR0B & B11111000 | B00000010 ;
  
  // Initialize serial communication
  Serial.begin(9600);

  // Set pin modes
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  pinMode(servo, OUTPUT);
  pinMode(enableRightMotor, OUTPUT);
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);
  pinMode(enableLeftMotor, OUTPUT);
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);
  pinMode(IR_SENSOR_RIGHT, INPUT);
  pinMode(IR_SENSOR_LEFT, INPUT);

  rotateMotor(0,0); 

  // Rotate servo to scan surroundings
  for (int angle = 70; angle <= 140; angle += 5) {
    servoPulse(servo, angle);
  }
  for (int angle = 140; angle >= 0; angle -= 5) {
    servoPulse(servo, angle);
  }
  for (int angle = 0; angle <= 70; angle += 5) {
    servoPulse(servo, angle);
  }
  
  // Read initial ultrasonic distance
  distance_F = Ultrasonic_read();
  delay(300);  
}

//**********************Main Loop****************************
void loop()
{
  // Read ultrasonic distance
  distance_F = Ultrasonic_read();
  Serial.print("D F=");
  Serial.println(distance_F);

  // Read IR sensor values
  int rightIRSensorValue = digitalRead(IR_SENSOR_RIGHT);
  int leftIRSensorValue = digitalRead(IR_SENSOR_LEFT);


  // Line Follower and Obstacle Avoidance Logic
  if (rightIRSensorValue == LOW && leftIRSensorValue == LOW) {
    if (distance_F > Set) {
      forwardMotion();
    } else {
      Check_side();
    }
  } else if (rightIRSensorValue == HIGH && leftIRSensorValue == LOW ) {
    turnRight();
  } else if (rightIRSensorValue == LOW && leftIRSensorValue == HIGH ) {
    turnLeft();
  } else {
    Stop();
  }
  delay(10);
}

//**********************Motion and Direction Control****************************
// Function to move the robot forward at a normal speed
void forwardMotion() {
  rotateMotor(MOTOR_SPEED, MOTOR_SPEED);
}

// Function to move the robot backward at a normal speed
void backwardMotion() {
  rotateMotor(-MOTOR_SPEED1, -MOTOR_SPEED1);
}

// Function to turn the robot right at a medium speed
void turnRight() {
  rotateMotor(-MOTOR_SPEED1, MOTOR_SPEED1); 
}

// Function to turn the robot left at a medium speed
void turnLeft() {
  rotateMotor(MOTOR_SPEED1, -MOTOR_SPEED1); 
}

// Function to turn the robot right quickly
void turnRightQuick() {
  rotateMotor(-MOTOR_SPEED2, MOTOR_SPEED2); 
}

// Function to turn the robot left quickly
void turnLeftQuick() {
  rotateMotor(MOTOR_SPEED2, -MOTOR_SPEED2); 
}

// Function to stop the robot
void Stop() {
  rotateMotor(0, 0);
}

//**********************Engine Config****************************
void rotateMotor(int rightMotorSpeed, int leftMotorSpeed) {
  // Right motor control
  if (rightMotorSpeed < 0) {
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, HIGH);    
  } else if (rightMotorSpeed > 0) {
    digitalWrite(rightMotorPin1, HIGH);
    digitalWrite(rightMotorPin2, LOW);      
  } else {
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, LOW);      
  }

  // Left motor control
  if (leftMotorSpeed < 0) {
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, HIGH);    
  } else if (leftMotorSpeed > 0) {
    digitalWrite(leftMotorPin1, HIGH);
    digitalWrite(leftMotorPin2, LOW);      
  } else {
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, LOW);      
  }

  // Set motor speeds
  analogWrite(enableRightMotor, abs(rightMotorSpeed));
  analogWrite(enableLeftMotor, abs(leftMotorSpeed));    
}

//**********************Servo PWM****************************
void servoPulse(int pin, int angle) {
  // Generate servo pulse
  int pwm = (angle * 11) + 980;
  digitalWrite(pin, HIGH);
  delayMicroseconds(pwm);
  digitalWrite(pin, LOW);
  delay(50);
}

//**********************Ultrasonic read****************************
long Ultrasonic_read() {
  // Read ultrasonic distance
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  long time = pulseIn(echo, HIGH);
  return time / 29 / 2;
}

//**********************Distance Algorithm****************************
// Function to compare the distances detected by the left and right sensors
void compareDistance() {
  if (distance_L > distance_R) { // If the distance detected by the left sensor is greater than that of the right sensor
    // Perform a series of maneuvers to navigate around the obstacle
    backwardMotion();
    delay(300);
    turnLeftQuick();
    delay(900);
    turnRightQuick();
    delay(100);
    forwardMotion();
    delay(500);
    turnRightQuick();
    delay(650);
    forwardMotion();
    delay(300);
  } else { // If the distance detected by the right sensor is greater than or equal to that of the left sensor
    // Perform a series of maneuvers to navigate around the obstacle
    backwardMotion();
    delay(300);
    turnRightQuick();
    delay(1000);
    forwardMotion();
    delay(600);
    turnLeftQuick();
    delay(800);
  }
}

// Function to check the distances on both sides of the robot and initiate obstacle avoidance
void Check_side() {
  Stop(); // Stop the robot before checking distances
  delay(100);
  // Sweep the servo to the right to measure distance
  for (int angle = 70; angle <= 140; angle += 5) {
    servoPulse(servo, angle);  
  }
  delay(300);
  // Read the distance detected by the left sensor
  distance_L = Ultrasonic_read();
  Serial.print("D R="); Serial.println(distance_R);
  delay(100);
  // Sweep the servo to the left to measure distance
  for (int angle = 140; angle >= 0; angle -= 5) {
    servoPulse(servo, angle);  
  }
  delay(500);
  // Read the distance detected by the right sensor
  distance_R = Ultrasonic_read();
  Serial.print("D L="); Serial.println(distance_L);
  delay(100);
  // Reset the servo position
  for (int angle = 0; angle <= 70; angle += 5) {
    servoPulse(servo, angle);  
  }
  delay(300);
  // Compare the distances and initiate obstacle avoidance
  compareDistance();
}
