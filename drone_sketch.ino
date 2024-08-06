#include <RC_Receiver.h>
#include <Servo.h>

const int BAUDRATE = 9600;
const int CH1PIN = 5;            // Steer Stick
const int CH2PIN = 3;            // Throttle
const int CH3PIN = 6;
const int CH4PIN = 7;
const int CH5PIN;
const uint8_t ESC_LEFTPIN = 8;    // Left ESC
const uint8_t ESC_RIGHTPIN = 12;  // Right ESC

const uint8_t min = 1285;
const uint8_t max = 1700;

const uint8_t mappedMin = 790;
const uint8_t mappedMax = 1077;
const uint8_t mappedCenter = 929;
const uint8_t deadzone = 90;

int mappedThrottle;
int mappedSteer;

Servo esc_left;
Servo esc_right;

void setup() {
  Serial.begin(BAUDRATE);

  esc_left.attach(ESC_LEFTPIN);
  esc_right.attach(ESC_RIGHTPIN);

  esc_left.writeMicroseconds(1500);
  esc_right.writeMicroseconds(1500);

  pinMode(CH1PIN, INPUT);
  pinMode(CH2PIN, INPUT);
}

void loop() {
  // Map the steer value
  mappedSteer = map(pulseIn(CH1PIN, HIGH), min, max, 0, 100);
  mappedThrottle = map(pulseIn(CH2PIN, HIGH), min, max, 0, 100);
  bool check = inRange(mappedSteer, mappedMin, mappedMax);
  if (check) {
    // If within deadzone, drive both motors
    esc_left.writeMicroseconds(mappedThrottle);
    esc_right.writeMicroseconds(mappedThrottle);
    Serial.println("BOTH GO");
  } else if (mappedSteer < mappedCenter - deadzone) {
    esc_left.writeMicroseconds(mappedThrottle);
    esc_right.writeMicroseconds(mappedCenter); // Center position for right motor
    Serial.println("LEFT ONLY");
  } else {
    esc_left.writeMicroseconds(mappedThrottle); // Center position for left motor
    esc_right.writeMicroseconds(mappedThrottle);
    Serial.println(mappedSteer);
  }
}


bool inRange(int val, int min, int max) {
  return ((min <= val) && (val <= max));
}