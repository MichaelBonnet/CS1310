/*
 * Michael Bonnet
 * CS1310 Programming 1 Section CN
 * Robert Galus
 */

#include <stdio.h>

int main()
{ // Beginning of function main
	
	double sum;
	double average;
	double count = 8.0;
	
	int *integer_1;
	int *integer_2;
	int *integer_3;
	int *integer_4;
	int *integer_5;
	int *integer_6;
	int *integer_7;
	int *integer_8;
	int first;
	int second;
	int third;
	int fourth;
	int fifth;
	int sixth;
	int seventh;
	int eighth;
	
	// The user is prompted for the eight integers they wish to find the sum and average of.
	printf("Please enter eight integers to find the sum and average of.\n");
	printf("Press enter after you finish typing each integer.\n");
	printf("1st integer: ");
	scanf("%d", &first);
	printf("2nd integer: ");
	scanf("%d", &second);
	printf("3rd integer: ");
	scanf("%d", &third);
	printf("4th integer: ");
	scanf("%d", &fourth);
	printf("5th integer: ");
	scanf("%d", &fifth);
	printf("6th integer: ");
	scanf("%d", &sixth);
	printf("7th integer: ");
	scanf("%d", &seventh);
	printf("8th integer: ");
	scanf("%d", &eighth);

	// The scanned-in values of the normal variables are assigned to the pointers.
	integer_1 = &first;
	integer_2 = &second;
	integer_3 = &third;
	integer_4 = &fourth;
	integer_5 = &fifth;
	integer_6 = &sixth;
	integer_7 = &seventh;
	integer_8 = &eighth;
	
	// Computes sum by adding all pointers to variable values together
	sum = *integer_1 + *integer_2 + *integer_3 + *integer_4 + *integer_5 + *integer_6 + *integer_7 + *integer_8;
	// Computes average by dividing sum by the number of integers gathered.
	average = sum / count;

	// Displays the result of calculations.
	printf("\nThe sum of the eight integers you entered is:      %f\n", sum);
	printf("The average of the eight integers you entered is:  %f\n", average);
	
	return 0;
	
} // End of function main
