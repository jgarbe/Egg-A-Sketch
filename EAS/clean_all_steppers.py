# -*- coding: utf-8 -*-
"""
Created on Wed Sep 25 10:50:27 2019

@author: steve
"""
from sys import path
path.append(r'/home/pi/EAS/steppers')

import stepper_control as sc

hMotor = sc.stepper(2, 4, 3, 17, _name="hMotor")
#eMotor = sc.stepper(14, 15, 18, 23, _name="eMotor")
vMotor = sc.stepper(27, 10, 22,  9, _name="vMotor")

hMotor.turn_off()
vMotor.turn_off()
#eMotor.turn_off()

hMotor.cleanup()
vMotor.cleanup()
#eMotor.cleanup()

GPIO.cleanup()
