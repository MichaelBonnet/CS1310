/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

int main (void) { // Beginning of main
	float tempCelsius; // Creates variable named tempCelsius; type float in order to create more exact calculations
	float tempFahrenheit; // Creates variable named tempFahrenheit; type float in order to create more exact calculations

	printf("Enter the temperature in degrees Celsius:____."); // Prompts user for input
	scanf("%f", &tempCelsius); // Gets user input and stores it as type float in variable tempCelsius
	
	tempFahrenheit = tempCelsius * (9.0 / 5.0) + 32.0; // Converts tempCelsius to Fahrenheit and stores it in variable tempFahrenheit

	printf("The temperature in degrees Fahrenheit is %f.", tempFahrenheit); // Displays the result of the calculation

	return(0); // return statement
} // End of main
