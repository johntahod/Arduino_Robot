 
#include <Servo.h>
//Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
//Servo myservo1;

int led = 5;//led on 5,6,7
int led1 = 6;
int led2= 7;
int trig = 9;
int echo = 3;
int duration;


void setup() {
  pinMode (led,OUTPUT);///led ,led1,led2 output
  pinMode(led1,OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);//begin communcation


//   myservo.attach(12); 
//  myservo1.attach(11);

}

void loop() {
digitalWrite(trig,LOW);
delay(10);
digitalWrite(trig,HIGH);
delay(10);
digitalWrite(trig,LOW);
duration = pulseIn(echo,HIGH);
Serial.println(duration);
 // myservo.write(90);
  //myservo1.write(90);


if(duration < 1000)
{
digitalWrite(led,HIGH);
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);

//myservo.write(90);
//myservo1.write(0);

}

if(duration > 1000 && duration <2000)
{
digitalWrite(led,LOW);
digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);

// myservo.write(80);
  //myservo1.write(100);
}



if (duration >2000)
{

digitalWrite(led,LOW);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);

// myservo.write(80);
//  myservo1.write(100);
}

}


