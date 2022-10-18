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