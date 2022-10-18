/****************************************************
The-C-Programming-Language-Exercise-1.4 Pg. 13

This is my solution to exercise 1.4 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie  

The exercise is defined as such: 
"Write a program to print the corresponding Celcius to Farenheit table."
*****************************************************/

#include <stdio.h>

// Print C -> F conversion table
int main(){

	int fahr, celcius;
	int lower, upper, step;

	// Numerical values to use in the table
	lower = 0;
	upper = 300;
	step = 20;

	celcius = lower;

	// Printing sequence

	printf("Celcius:	Farenheit:\n");
	while(celcius <= upper){
		fahr = celcius * (9/5) + 32;
		printf("%d\t\t%d\n", celcius, fahr);
		celcius = celcius + step;
	}
	return 0;
}