/****************************************************

The-C-Programming-Language-Exercise-1.12 Pg. 21

This is my solution to exercise 1.12 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program that prints its input one word per line."

*****************************************************/

#include <stdio.h>

int main(){

	int prev, c;
	prev = c = 0;

// While the program is not terminated

	while ((c = getchar()) != EOF){
		// Separate at spaces tabs and newlines
		if (c == ' ' || c == '\t' || c == '\n' ){
			if (prev != ' ' && prev != '\t' && prev != '\n')
				putchar('\n');
			prev = '\n';
		}
		else{
			putchar(c);
			prev = c;
		}
	}
	return 0;
}