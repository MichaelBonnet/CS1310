/*
 * Michael Bonnet
 * CS1310 Assignment 7
 * Robert Galus
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE * fp; // file pointer to keep track where we are in the file
    
    fp = fopen("cyan.txt", "a"); // creates or opens a file that is named "cyan.txt" then appends( adds information at the end)
    fprintf(fp,"\n CS1310");// the pointer prints the course number 
    fprintf(fp,"\n M103"); // the pointer prints the class room number 
    fclose(fp); // freezes memory, gives back memory to pc 

	return 0;

}
