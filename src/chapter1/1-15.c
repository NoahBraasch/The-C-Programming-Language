/****************************************************

The-C-Programming-Language-Exercise-1.15 Pg. 27

This is my solution to exercise 1.15 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Rewrite the temperature conversion program of section 1.2 
(exercise 1.3) to use a function for conversion."

*****************************************************/

#include <stdio.h>

// Prototype declaration
int ftoc(int);

// Print F -> C conversion table
int main(){

	int fahr;
	int lower, upper, step;

	// Numerical values to use in the table
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	// Printing sequence

	printf("Farenheit:	Celcius:\n");
	while(fahr <= upper){
		printf("%d\t\t%d\n", fahr, ftoc(fahr));
		fahr = fahr + step;
	}
	return 0;
}

// Takes farenheit temp and returns C conversion
int ftoc(int fahr){
	int celcius = 5 * (fahr - 32) / 9;
	return celcius;
}