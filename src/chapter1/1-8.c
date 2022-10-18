/****************************************************

The-C-Programming-Language-Exercise-1-8 Pg. 20

This is my solution to exercise 1.4 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program to count blanks, tabs, and newlines 
(in the console input stream)."

*****************************************************/

#include <stdio.h>

int main(){

	// nl = new lines, bl = blanks, tb = tabs
	int c, nl, bl, tb;

	c = nl = bl = tb = 0;
	
	// Important to remember to add {} around the while loop because it is no longer a single line statement
	while((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == ' ')
			++bl;
		if (c == '\t')
			++tb;
	}
	printf("New lines: %d\nBlanks: %d\nTabs: %d", nl, bl, tb);

	return 0;
}