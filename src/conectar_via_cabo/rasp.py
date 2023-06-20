import RPi.GPIO as GPIO
import time
import serial

led = 17

ser = serial.Serial("/dev/ttyS0", 115200, timeout=1)

GPIO.setwarnings(False)

GPIO.setmode(GPIO.BCM)
GPIO.setup(led, GPIO.OUT)

while True:
    x = ser.readline()
    print(x)
    time.sleep(1)
