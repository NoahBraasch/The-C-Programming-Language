/****************************************************

The-C-Programming-Language-Exercise-1.14 Pg. 24

This is my solution to exercise 1.14 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program to print a histogram of the frequencies 
of different characters in its input."

Note: 
For this exercise, it is important to have basic familiaarity with the table 
of ASCII characters, which can be found on Google.

*****************************************************/


#include <stdio.h>

int main(){

	// Creates and initializes array for storing standard, typable, ASCII characters.
	int arr[94];
	for (int x = 0; x < 94; ++x)
		arr[x] = 0;

	int c, prev, length, top;
	c = prev = length = top = 0;

	while ((c = getchar()) != EOF){
		// We decrement 32 from the array address to offset the ASCII value to fit array index
		++arr[c - 32];
	}
	
	// Established max height of the histogram
	for (int y = 0; y < 16; ++y){
		if (arr[y] > top)
			top = arr[y];
	}

	// Adds a side scale with a space buffer so it wont misalign the histogram values
	while (top > 0){
		printf("%d", top);
		if (top < 10000);
			putchar(' ');
		if (top < 1000);
			putchar(' ');
		if (top < 100)
			putchar(' ');
		if (top < 10)
			putchar(' ');

		// Checks if a line needs to be drawn at this height and then draws
		for (int z = 0; z < 94; ++z){
			if (arr[z] >= top)
				printf("_ ");
			else
				printf("  ");
		}
		--top;
		putchar('\n');
	}

	// Horizontal scale
	printf("     ");
	for(int a = 32; a < 126; ++a)
		printf("%c ", a);
	return 0;
}