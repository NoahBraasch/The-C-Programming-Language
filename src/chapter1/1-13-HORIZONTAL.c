/****************************************************

The-C-Programming-Language-Exercise-1.13-HORIZONTAL Pg. 24

This is my solution to exercise 1.13 as defined in the book "The C Programming Language" 
by Brian Kernighan and Dennis Ritchie 

The exercise is defined as such: "Write a program to print a histogram of the length 
of words in its input. It is easy to draw the histogram with the bars horizontal; 
a vertical orientation is more challenging. " In this example, I have created the 
horizontal orientation.

*****************************************************/

#include <stdio.h>

int main(){

	int arr[16];
	for (int x = 0; x < 16; ++x)
		arr[x] = 0;

	int c, prev, length;
	c = prev = length = 0;

// Count word length in input
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

// Draw characters across based on how many times they occur
	for (int y = 0; y < 10; ++y){
		printf("%d:  ", y + 1);
		while (arr[y] > 0){
			putchar('|');
			--arr[y];
		}
		putchar('\n');
	}
	for (int y = 10; y < 15; ++y){
		printf("%d: ", y + 1);
		while (arr[y] > 0){
			putchar('|');
			--arr[y];
		}
		putchar('\n');
	}
	printf("16+:");
	while(arr[15] > 0){
		putchar('|');
		--arr[15];
	}
	putchar('\n');
	return 0;
}