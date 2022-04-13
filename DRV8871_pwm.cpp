/*
 * DRV8871_pwm.c
 *
 *  Created on: Feb 22, 2022
 *      Author: tdurrer
 */


// Basic sketch for trying out the Adafruit DRV8871 Breakout

#include "Maslow.h"


#define MOTOR_IN1 9
#define MOTOR_IN2 10

void setup_drv() {
 //tdu  Serial.begin(9600);

  //tdu Serial.println("DRV8871 test");

  pinMode(MOTOR_IN1, OUTPUT);
  pinMode(MOTOR_IN2, OUTPUT);
}

void loop_drv() {

  // ramp up forward
  digitalWrite(MOTOR_IN1, LOW);
  for (int i=0; i<255; i++) {
    analogWrite(MOTOR_IN2, i);
    delay(10);
  }

  // forward full speed for one second
  delay(1000);

  // ramp down forward
  for (int i=255; i>=0; i--) {
    analogWrite(MOTOR_IN2, i);
    delay(10);
  }

  // ramp up backward
  digitalWrite(MOTOR_IN2, LOW);
  for (int i=0; i<255; i++) {
    analogWrite(MOTOR_IN1, i);
    delay(10);
  }

  // backward full speed for one second
  delay(1000);

  // ramp down backward
  for (int i=255; i>=0; i--) {
    analogWrite(MOTOR_IN1, i);
    delay(10);
  }
}

