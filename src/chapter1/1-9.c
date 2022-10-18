/****************************************************

The-C-Programming-Language-Exercise-1-9 Pg. 20

This is my solution to exercise 1.4 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank"

*****************************************************/

#include <stdio.h>

int main(){

	// prev = previous character
	int c, prev;

	c = prev = 0;

	// I've avoided the && operator here as it was not mentioned in the book yet. a more elegent solution would use &&
	
	// Checks if getchar() is a space, if it is, checks if the previously checked character was also a space
	// if both conditions are met, the loop is restarted.
	while((c = getchar()) != EOF){
		if (c == ' '){
			if (prev != ' ')
				putchar(c);
		}
		else
			putchar(c);	
		prev = c;
	}
	return 0;
}