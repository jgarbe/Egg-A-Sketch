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
	int speed_adj = 25; // Somewhere between 25 and 35 becomes smooth
	wiringPiSetup();	
	pinMode(PWM_pin,OUTPUT);	/* set GPIO as output */
	softPwmCreate(PWM_pin,0,200);	/* set PWM channel along with range*/

		for (intensity = 0; intensity < range; intensity++)
		{
		  softPwmWrite (PWM_pin, intensity); /* change the value of PWM */
		  delay (speed_adj) ;
		}

	delay(2000);
}

