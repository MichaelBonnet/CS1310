/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

int main (void) { // Beginning of main
	
	double tempCelsius; // Creates variable named tempCelsius; type double in order to create more exact calculations
	double tempFahrenheit; // Creates variable named tempFahrenheit; double float in order to create more exact calculations

	printf("Enter the temperature in degrees Celsius:____."); // Prompts user for input
	scanf("%f", &tempCelsius); // Gets user input and stores it as type double in variable tempCelsius
	
	tempFahrenheit = tempCelsius * (9.0 / 5.0) + 32.0; // Converts tempCelsius to Fahrenheit and stores it in variable tempFahrenheit

	printf("The temperature in degrees Fahrenheit is %d.", tempFahrenheit); // Displays the result of the calculation

	return(0); // return statement
	
} // End of main
