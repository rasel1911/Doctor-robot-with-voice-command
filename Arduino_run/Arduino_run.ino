#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define servoMIN 200  // Minimum pulse length out of 4096
#define del 100
#define servoMAX 600  // Maximum pulse length out of 4096
int p0x=250,p1x=300,p2x=350,p3x=250,p4x=300,p5x=550,p0n=250,p1n=300,p2n=350,p3n=250,p4n=300,p5n=550,p6n=300,p6x=300,p7n=300,p7x=300,p8n=300,p8x=300;
void setup() {
  
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60);  // Standard frequency for servos
}

void setServoAngleWithSpeed(uint8_t channel, int startPulse, int endPulse, int speedDelay) {
  // Increment or decrement pulse width gradually
  int step = (startPulse < endPulse) ? 1 : -1;

  for (int pulse = startPulse; pulse != endPulse; pulse += step) {
    pwm.setPWM(channel, 0, pulse);
    delay(speedDelay);  // Speed delay between each step
  }
  // Set the final position to ensure it stops exactly at endPulse
  pwm.setPWM(channel, 0, endPulse);
}

void loop() {
  // Gradually move each servo to different positions with speed control
  setServoAngleWithSpeed(0, p0n, p0x, 10);  // Move servo on channel 0
  //Serial.println("Channel 0 position: 250");
  delay(del);

  setServoAngleWithSpeed(1, p1n, p1x, 10); // Move servo on channel 1
  //Serial.println("Channel 1 position: 300");
  delay(del);

  setServoAngleWithSpeed(2, p2n, p2x, 10);  // Move servo on channel 2
  //Serial.println("Channel 2 position: 350");
  delay(del);

  setServoAngleWithSpeed(3, p3n, p3x, 10);  // Move servo on channel 3
  //Serial.println("Channel 3 position: 250");
  delay(del);

  setServoAngleWithSpeed(4, p4n, p4x, 10);  // Move servo on channel 4
  //Serial.println("Channel 4 position: 300");
  delay(del);

  setServoAngleWithSpeed(5, p5n, p5x, 10);  // Move servo on channel 5
  //Serial.println("Channel 5 position: 550");
  delay(del);
  setServoAngleWithSpeed(6, p5n, p5x, 10);  // Move servo on channel 5
  //Serial.println("Channel 5 position: 550");
  delay(del);
  setServoAngleWithSpeed(7, p5n, p5x, 10);  // Move servo on channel 5
  //Serial.println("Channel 5 position: 550");
  delay(del);
  setServoAngleWithSpeed(8, p5n, p5x, 10);  // Move servo on channel 5
  //Serial.println("Channel 5 position: 550");
  delay(del);
  if (Serial.available() > 0) {
    char command = Serial.read();  // Read the incoming byte
    if (command == 'a') {
      Serial.println("Received 'a', moving servo on channel 0");
       p0n=p0x;
       p0x=p0x-30;
      Serial.println("Channel 0 position");
      Serial.print(p0x);
      delay(500);
    }
    else if (command == 'b') {
      Serial.println("Received 'b', moving servo on channel 0");
       p0n=p0x;
       p0x=p0x+30;
      Serial.println("Channel 0 position");
      Serial.print(p0x);
      delay(500);
    }
    else if (command == 'c') {
      Serial.println("Received 'c', moving servo on channel 0");
       p1n=p1x;
       p1x=p1x-30;
      Serial.println("Channel 0 position");
      Serial.print(p1x);
      delay(500);
    }
    else if (command == 'd') {
      Serial.println("Received 'd', moving servo on channel 0");
       p1n=p1x;
       p1x=p1x+30;
      Serial.println("Channel 0 position");
      Serial.print(p1x);
      delay(500);
    }
    else if (command == 'e') {
      Serial.println("Received 'e', moving servo on channel 0");
       p2n=p2x;
       p2x=p2x-30;
      Serial.println("Channel 0 position");
      Serial.print(p0x);
      delay(500);
    }
    else if (command == 'f') {
      Serial.println("Received 'f', moving servo on channel 0");
       p2n=p2x;
       p2x=p2x+30;
      Serial.println("Channel 0 position");
      Serial.print(p0x);
      delay(500);
    }
    else if (command == 'g') {
      Serial.println("Received 'g', moving servo on channel 0");
       p3n=p3x;
       p3x=p3x-30;
      Serial.println("Channel 0 position");
      Serial.print(p2x);
      delay(500);
    }
    else if (command == 'h') {
      Serial.println("Received 'h', moving servo on channel 0");
       p3n=p3x;
       p3x=p3x+30;
      Serial.println("Channel 0 position");
      Serial.print(p3x);
      delay(500);
    }
    else if (command == 'i') {
      Serial.println("Received 'i', moving servo on channel 0");
       p4n=p4x;
       p0x=p0x-30;
      Serial.println("Channel 0 position");
      Serial.print(p4x);
      delay(500);
    }
    else if (command == 'j') {
      Serial.println("Received 'j', moving servo on channel 0");
       p4n=p4x;
       p4x=p4x+30;
      Serial.println("Channel 0 position");
      Serial.print(p4x);
      delay(500);
    }
    else if (command == 'k') {
      Serial.println("Received 'k', moving servo on channel 0");
       p5n=p5x;
       p5x=p5x-30;
      Serial.println("Channel 0 position");
      Serial.print(p5x);
      delay(500);
    }
    else if (command == 'l') {
      Serial.println("Received 'l', moving servo on channel 0");
       p5n=p5x;
       p5x=p5x+30;
      Serial.println("Channel 0 position");
      Serial.print(p5x);
      delay(500);
    }
    else if (command == 'm') {
      Serial.println("Received 'm', moving servo on channel 0");
       p6n=p6x;
       p6x=p6x-30;
      Serial.println("Channel 0 position");
      Serial.print(p6x);
      delay(500);
    }
    else if (command == 'n') {
      Serial.println("Received 'n', moving servo on channel 0");
       p6n=p6x;
       p6x=p6x+30;
      Serial.println("Channel 0 position");
      Serial.print(p5x);
      delay(500);
    }
    else if (command == 'o') {
      Serial.println("Received 'o', moving servo on channel 0");
       p7n=p7x;
       p7x=p7x+30;
      Serial.println("Channel 0 position");
      Serial.print(p5x);
      delay(500);
    }


   
    
    
  }


  
}
