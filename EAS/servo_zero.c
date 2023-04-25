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

		  softPwmWrite (PWM_pin, 18); /* change the value of PWM */
		  delay(2000);
		//for (intensity = 0; intensity < range; intensity++)
		//{
		  //softPwmWrite (PWM_pin, intensity); /* change the value of PWM */
		  //delay (speed_adj) ;
		//}
		//delay(1000);

		//for (intensity = range; intensity >= 0; intensity--)
		//{
		  //softPwmWrite (PWM_pin, intensity);
		  //delay (speed_adj);
		//}
		
		  softPwmWrite (PWM_pin, 1);
		  delay (2000);
	
}
