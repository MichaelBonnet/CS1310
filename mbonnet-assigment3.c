/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

void FahrenheitToCelsiusConversion (double conversionValue) { // Converts Fahrenheit to Celsius
	
	double output;
	
	output = (conversionValue - 32) / (9.0 / 5.0);
	
	printf("%.2lf", output);
}

void CelsiusToFahrenheitConversion (double conversionValue) { // Converts Celsius to Fahrenheit
	
	double output;
	
	output = (conversionValue) * (9.0 / 5.0) + 32;
	
	printf("%.2lf", output);
}

void InchesToCentimetersConversion (double conversionValue) { // Converts Inches to Centimeters
	
	double output;
	
	output = conversionValue * 2.54;
	
	printf("%.2lf", output);
}

void CentimetersToInchesConversion (double conversionValue) { // Converts Centimeters to Inches
	
	double output;
	
	output = conversionValue / 2.54;

	printf("%.2lf", output);
}

int main(void) {
	
int conversionChoice;
double conversionValue;

printf("Select from the menu below to convert temperature or linear\n");
printf("menus:\n");
printf("\n");
printf("1 Convert Fahrenheit to Celsius\n");
printf("2 Convert Celsius to Fahrenheit\n");
printf("3 Convert Inches to Centimeters\n");
printf("4 Convert Centimeters to Inches\n");
printf("5 Exit the Program\n");

scanf("%d", &conversionChoice); 

printf("Enter the value you wish to convert:\n");
scanf("%lf", &conversionValue); // Gets single conversion value to plug into any of the functions called by the switch statements

switch (conversionChoice) { // Determines which conversion to run
	
case 1:
	FahrenheitToCelsiusConversion(conversionValue);
	break;

case 2:
	CelsiusToFahrenheitConversion(conversionValue);
	break;
	
case 3:
	InchesToCentimetersConversion(conversionValue);
	break;
	
case 4:
	CentimetersToInchesConversion(conversionValue);
	break;
	
case 5:
	printf("Program exiting.");
	break;
	
	
default:
	printf("Invalid choice. Program exiting."); // In case the user inputs an invalid number.
	break;

}

return 0;	
	
}

