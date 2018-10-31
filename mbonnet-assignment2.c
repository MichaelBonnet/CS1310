/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

int main(void) {
	int userConversionChoice;
	double userConversionNumber;
	double CelsiusToFahrenheitResult;
	double FahrenheitToCelsiusResult;
	
	printf("Enter 1 to convert Celsius to Fahrenheit\n");
	printf("Enter 2 to convert Fahrenheit to Celsius\n");
	printf("Enter 0 to exit\n");
	
	scanf("%d", &userConversionChoice);
	
	if (userConversionChoice == 1)
	{
		scanf("%lf", &userConversionNumber);
		CelsiusToFahrenheitResult = (1.8 * userConversionNumber) + 32.0;
		
		printf("%0.0lf degrees Celsius equals %0.0lf degrees Fahrenheit", userConversionNumber, CelsiusToFahrenheitResult);	
	}	
	else if (userConversionChoice == 2) 
	{
		scanf("%lf", &userConversionNumber);
		FahrenheitToCelsiusResult = (userConversionNumber - 32.0) / 1.8;
		
		printf("%0.0lf degrees Fahrenheit equals %0.0lf degrees Celsius", userConversionNumber, FahrenheitToCelsiusResult);
			
	}
	else
	{
		printf("exit the program");
				
	}
	return(0);
}
