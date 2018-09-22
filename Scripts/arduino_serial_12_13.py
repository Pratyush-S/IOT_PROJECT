#arduino and pi communication

#imprt time and serial libraries
import time
import serial

usbCom=serial.Serial('/dev/ttyACM0',9600) #ser baud rate sync btw boards
#usbCom.open()
#this line had to be removed as the port was already open
usbCom.write('1') #serial write 1
time.sleep(3)       #wait for 3 second
usbCom.write('2')
