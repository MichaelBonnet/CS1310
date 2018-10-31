/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

int main (void) {
	float tempCelsius;
	float tempFahrenheit;

	printf("Enter the temperature in degrees Celsius:____.");
	scanf("%f", &tempCelsius);
	
	tempFahrenheit = tempCelsius * (9.0 / 5.0) + 32.0;

	printf("The temperature in degrees Fahrenheit is %f.", tempFahrenheit);

	return(0);
}
