/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

void FahrenheitToCelsiusConversion (double conversionValue) // Converts Fahrenheit to Celsius
{ // Beginning of function FahrenheitToCelsiusConversion
	
	double output; // initializes variable output to store the result of the conversion
	
	output = (conversionValue - 32) / (9.0 / 5.0); // converts conversionValue from Fahrenheit to Celsius, stores the result in output
	
	printf("%.2lf", output); // prints the result of the conversion
	
} // End of function FahrenheitToCelsiusConversion

void CelsiusToFahrenheitConversion (double conversionValue) // Converts Celsius to Fahrenheit
{ // Beginning of function CelsiusToFahrenheitConversion
	
	double output; // initializes variable output to store the result of the conversion
	
	output = (conversionValue) * (9.0 / 5.0) + 32; // converts conversionValue from Celsius to Fahrenheit, stores the result in output
	
	printf("%.2lf", output); // prints the result of the conversion
	
} // End of function CelsiusToFahrenheitConversion

void InchesToCentimetersConversion (double conversionValue) // Converts Inches to Centimeters
{ // Beginning of fuction InchesToCentimetersConversion
	
	double output; // initializes variable output to store the result of the conversion
	
	output = conversionValue * 2.54; // converts conversionValue from Inches to Centimeters, stores the result in output
	
	printf("%.2lf", output); // prints the result of the conversion
	
} // End of function InchesToCentimetersConveriosn

void CentimetersToInchesConversion (double conversionValue) // Converts Centimeters to Inches
{ // Beginning of function CentimetersToInchesConversion
	
	double output; // initializes variable output to store the result of the conversion
	
	output = conversionValue / 2.54; // converts conversionValue from Centimeters to Inches, stores the result in output

	printf("%.2lf", output); // prints the result of the conversion
	
} // End of function CentimetersToInchesConversion

int main(void) // Main function
{ // Beginning of function main
	
	int conversionChoice; // initializes variable conversionChoice which will store user input and help determine what conversion to run
	double conversionValue; // initializes variable conversionValue of type double to store user input and use to make an exact conversion calculation

	// The gollowing print statements show the user a menu of their options, prompting the user for a response
	printf("Select from the menu below to convert temperature or linear\n");
	printf("menus:\n");
	printf("\n");
	printf("1 Convert Fahrenheit to Celsius\n");
	printf("2 Convert Celsius to Fahrenheit\n");
	printf("3 Convert Inches to Centimeters\n");
	printf("4 Convert Centimeters to Inches\n");
	printf("5 Exit the Program\n");

	scanf("%d", &conversionChoice); // Gets user response and stores it in variable conversionChoice, used later to determine what conversion to run in a switch statement

	printf("Enter the value you wish to convert:\n"); // Prompts user for a value to convert
	scanf("%lf", &conversionValue); // Stores user value into conversionValue, will be passed into functions based on conversion choice
	
	switch (conversionChoice) // Determines which conversion to run
	{ // Beginning of switch statement
	
	case 1: // If conversionChoice = 1, conversionValue will be converted from Fahrenheit to Celsius.
		FahrenheitToCelsiusConversion(conversionValue); // Calls function FahrenheitToCelsiusConversion and passes conversionValue into it
		break;

	case 2: // If conversionChoice = 2, conversionValue will be converted from Celsius to Fahrenheit.
		CelsiusToFahrenheitConversion(conversionValue); // Calls function CelsiusToFahrenheitConversion and passes conversionValue into it
		break;
	
	case 3: // If conversionChoice = 3, conversionValue will be converted from Inches to Centimeters.
		InchesToCentimetersConversion(conversionValue); // Calls function InchesToCentimetersConversion and passes conversionValue into it
		break;
	
	case 4: // If conversionChoice = 4, conversionValue will be converted from Centimeters to Inches.
		CentimetersToInchesConversion(conversionValue); // Calls function CentimetersToInchesConversion and passes conversionValue into it
		break;
	
	case 5: // If conversionChoice = 5, the program will exit.
		printf("Program exiting.");
		break;
	
	
	default: // If the user chose an invalid integer in the menu prompt, the user will be informed that the choice was invalid and that the program is exiting.
		printf("Invalid choice. Program exiting."); // Informs the user of their invalid choice and of program exiting.
		break;

	} // End of switch statement

	return 0; // return statement	
	
} // End of function main

