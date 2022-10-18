/****************************************************
The-C-Programming-Lanuage-Exercise-1.7 Pg. 17

This is my solution to exercise 1.7 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program to print the value of EOF."

*****************************************************/

#include <stdio.h>

int main(){
	// By using the decimal specifier as our output formatter,
	// the value of EOF is displayed as an integer, which in this case the value is -1.
	// This is important because EOF and only EOF will have a value of -1
	printf("The value of EOF is: %d", EOF);
	return 0;
}