# Import the libraries to send os commands and access GPIO pins
import RPi.GPIO as GPIO
from os import system

GPIO.setmode(GPIO.BOARD) # Set pin numbering to board numbering
GPIO.setup(7, GPIO.IN) # Setup pin 7 as an input
GPIO.wait_for_edge(7, GPIO.RISING) # Wait for pin 7's value to go from 0 to 1
os.system("sudo shutdown -h now") # Send shutdown command to OS
