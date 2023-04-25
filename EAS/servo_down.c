/*
  Control Servo using PWM on OrangePi
 */

#include <wiringPi.h> /* include wiringPi library */
#include <stdio.h>    
#include <softPwm.h>  /* include header file for software PWM */

int main(){
	int PWM_pin = 14;		
	int intensity;
	int range = 18;
	int speed_adj = 75;
	wiringPiSetup();	
	pinMode(PWM_pin,OUTPUT);	/* set GPIO as output */
	softPwmCreate(PWM_pin,1,200);	/* set PWM channel along with range*/

		  softPwmWrite (PWM_pin, 1); /* change the value of PWM */
		  delay(2000);
//   Move Servo Up
	
}
