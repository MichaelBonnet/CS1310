/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

int main(void)
{ // beginning of function main
	
	// the last 3 variables are initialized with type double in order to give exact calculations
	int userConversionChoice; // initializes a variable that will be used to store the choice of what kind of conversion the user wants to do, to be used in if-else branches
	double userConversionNumber; // Initializes a variable that will be used to store the value the user wishes to convert
	double CelsiusToFahrenheitResult; // initializes a variable that will be used to store the result of a Celsius to Fahrenheit conversion to later display
	double FahrenheitToCelsiusResult; // initializes a variable that will be used to store the result of a Fahrenheit to Celsius conversion to later display
	
	// the following 3 print statements below give the user their options for what they would like to convert and asks them to choose.
	printf("Enter 1 to convert Celsius to Fahrenheit\n");
	printf("Enter 2 to convert Fahrenheit to Celsius\n");
	printf("Enter 0 to exit\n");
	
	scanf("%d", &userConversionChoice); // stores user input in conversionChoice.
	
	if (userConversionChoice == 1) // if the user chose Celsius to Fahrenheit by typing '1', they are prompted to type the value to convert, and the conversion happens.
	{ // beginning of if branch #1                           
		scanf("%lf", &userConversionNumber); // gets user input and stores it in variable userConversinNumber
		CelsiusToFahrenheitResult = (1.8 * userConversionNumber) + 32.0; // converts userConversionNumber to Fahrenheit
		
		printf("%0.0lf degrees Celsius equals %0.0lf degrees Fahrenheit", userConversionNumber, CelsiusToFahrenheitResult); // Displays conversion result
	} // end of if branch #1	
	else if (userConversionChoice == 2) // if the user chose Fahrenheit to Celsius by typing '1', they are prompted to type the value to convert, and the conversion happens.
	{ // beginning of if branch #2
		scanf("%lf", &userConversionNumber); // gets user input and stores it in variable userConversinNumber
		FahrenheitToCelsiusResult = (userConversionNumber - 32.0) / 1.8; // converts userConversionNumber to Celsius
		
		printf("%0.0lf degrees Fahrenheit equals %0.0lf degrees Celsius", userConversionNumber, FahrenheitToCelsiusResult); // Displays conversion result
			
	} // End of if branch #2
	else // if the user did not choose 1 or 2, the program exits; included in range 1 and 2 is 0, so it exits if the user chose 0.
	{ // beginning of else statement #1 (the default branch)
		printf("Exit the program"); // prints a phrase letting the user know what happened.
				
	} // beginning of else statement #1 (the default branch)
	return(0); // return statement
	
} // end of function main
