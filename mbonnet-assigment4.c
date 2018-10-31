/********************************************************

// Student Name: Michael Bonnet                        //
// Class Name and Section: Programming I, section CN   //
// Instructor Name: Robert Galus                       //

********************************************************/

#include <stdio.h>
#include <string.h>

int main (void)
{
	char myString[100]; // Initialize the string with a length of 100.

	printf("Input a string of characters up to 100 characters in length: "); // Prompts the user for input
	scanf("%s", myString); // Reads user input into the string array.
	
	printf("The reversed string is: %s\n", strrev(myString)); // strrev() reverses a string. The full statement prints it out.
	
	printf("The length of the string with the null character is %d\n", (strlen(myString)) + 1); // The null character is not included in strlen(),
																								//  so we add 1 to display the length with the null.
	printf("The length of the string without the null character is %d\n", strlen(myString)); // Simple use and display of strlen().
	
	return 0;
}

