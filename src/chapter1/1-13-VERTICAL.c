/****************************************************

The-C-Programming-Language-Exercise-1.13-VERTICAL Pg. 24

This is my solution to exercise 1.13 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program to print a histogram of the length 
of words in its input. It is easy to draw the histogram with the bars horizontal; 
a vertical orientation is more challenging. " In this example, I have created the 
vertical orientation.

*****************************************************/

#include <stdio.h>

int main(){

	int arr[16];
	for (int x = 0; x < 16; ++x)
		arr[x] = 0;

	int c, prev, length, top;
	c = prev = length = top = 0;

// Count word length of input
	while ((c = getchar()) != EOF){
		if (c != ' ' && c != '\t' && c != '\n')
			++length;
		else {
			if (length >= 15)
				++arr[15];
			else
				++arr[length - 1];
			length = 0;
		}
	}
	
	// Established max height of the histogram
	for (int y = 0; y < 16; ++y){
		if (arr[y] > top)
			top = arr[y];
	}

	// Adds a side scale with a space buffer so it wont offset the histogram values
	while (top > 0){
		printf("%d", top);
		if (top < 1000);
			putchar(' ');
		if (top < 100)
			putchar(' ');
		if (top < 10)
			putchar(' ');

		// Checks if a box needs to be drawn at this height and then draws
		for (int z = 0; z < 16; ++z){
			if (arr[z] >= top)
				printf("_  ");
			else
				printf("   ");
		}
		--top;
		putchar('\n');
	}

	// Horizontal scale
	printf("    ");
	for(int a = 0; a < 9; ++a)
		printf("%d  ", a + 1);
	for(int a = 9; a < 15; ++a)
		printf("%d ", a + 1);
	printf("16+");
	return 0;
}