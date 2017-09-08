/* 
  Connect 5V on Arduino to VCC on Relay Module
  Connect GND on Arduino to GND on Relay Module 
  Connect GND on Arduino to the Common Terminal (middle terminal) on Relay Module. */
 
 #define IN1 12//2   // Connect Digital Pin 8 on Arduino to CH1 on Relay Module
 #define IN2 13
 //#define IN3
 #define IN3 8
 #define IN4 7
 //#define LEDgreen 4 //Connect Digital Pin 4 on Arduino to Green LED (+ 330 ohm resistor) and then to "NO" terminal on relay module
 //#define LEDyellow 12 //Connect Digital Pin 12 on Arduino to Yellow LED (+ 330 ohm resistor) and then to "NC" terminal on relay module
 
 void setup(){
   //Setup all the Arduino Pins
   pinMode(IN1, OUTPUT);
   pinMode(IN2, OUTPUT);
   pinMode(IN3, OUTPUT);  
   pinMode(IN4, OUTPUT);
   //pinMode(CH3, OUTPUT);
   //pinMode(LEDgreen, OUTPUT);
   //pinMode(LEDyellow, OUTPUT);
   
   //Provide power to both LEDs
   //digitalWrite(LEDgreen, HIGH);
   //digitalWrite(LEDyellow, HIGH);
   
   //Turn OFF any power to the Relay channels
   digitalWrite(IN1,LOW);//ok
   digitalWrite(IN2,HIGH);//ok
   digitalWrite(IN3,HIGH);
   digitalWrite(IN4,HIGH);
   //digitalWrite(CH3,LOW);
   delay(2000); //Wait 2 seconds before starting sequence
 }
 
 void loop(){
   //digitalWrite(IN1, HIGH);  //Green LED on, Yellow LED off
   //digitalWrite(IN2, HIGH);
   delay(2000);
   //digitalWrite(IN1, LOW);   //Yellow LED on, Green LED off
   //digitalWrite(IN2, LOW);
   delay(2000);
//   digitalWrite(CH3, HIGH);  //Relay 3 switches to NO
//   delay(1000);
//   digitalWrite(CH3,LOW);    //Relay 3 switches to NC
//   delay(1000);
 }
