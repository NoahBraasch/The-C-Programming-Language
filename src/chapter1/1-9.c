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