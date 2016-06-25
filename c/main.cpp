#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "wiringPi.h"

int main( ) {

	if(wiringPiSetup() == -1) {
		printf("%s \n", "Failed to setup");
	}

	pinMode(7, INPUT);

	while(1) {
		if(digitalRead(7) != 0) {
			printf("%s \n", "Attempting to shutdown");
			system("sudo shutdown -h now");
		}
		
		usleep(100000);
		
	}

}
