/****************************************************

The-C-Programming-Language-Exercise-1.10 Pg. 20

This is my solution to exercise 1.4 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program to copy its input to its output, 
replacing each tab by \t, each backspace by \b, and each backslash by \\."

*****************************************************/

#include <stdio.h>

int main(){

	int c;

	while ((c = getchar()) != EOF){
		if (c == '\t')
			// Using printf because \t is two characters not one
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if(c == '\\')
			// Remember we have to put four \ because we need two to print and each one that prints needs to be escaped.
			printf("\\\\");
		else
			putchar(c);
	}

	return 0;
}