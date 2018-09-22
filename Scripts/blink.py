#blink.py    to comment in python here to name the file

import time #time library
import RPi.GPIO as GPIO #gpio from rpi library

GPIO.setmode(GPIO.BCM) # broadcom
GPIO.setup(3,GPIO.OUT)  #setting pin as output
GPIO.output(3,True)	#pin 4 high
time.sleep(1)		#wait 1 sescond
GPIO.output(3,False)
time.sleep(1)
GPIO.output(3,True)
time.sleep(1)		
GPIO.output(3,False)
time.sleep(1)
GPIO.output(3,True)
time.sleep(1)		
GPIO.output(3,False)
time.sleep(1)
GPIO.output(3,True)
time.sleep(1)		
GPIO.output(3,False)
time.sleep(1)
GPIO.output(3,True)
time.sleep(1)		
GPIO.output(3,False)
time.sleep(1)
GPIO.output(3,True)
time.sleep(1)		
GPIO.output(3,False)



#use loop for this bs