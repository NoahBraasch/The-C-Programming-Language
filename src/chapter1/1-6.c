/****************************************************
# The-C-Programming-Language-Exercise-1.6 Pg. 17

This is my solution to exercise 1.6 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie. 

The exercise is defined as such: "Verify that the expression getchar() != EOF is 0 or 1."
*****************************************************/


// Note: To invoke EOF character on windows type Ctrl + Z and hit enter.

#include <stdio.h>

int main(){

	int c;

	printf("EOF comparison value: %d", ((c = getchar()) != EOF));

	return 0;
}