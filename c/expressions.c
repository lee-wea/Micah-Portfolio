#include <stdio.h>	// Preprocessor directive

int main() {
	int a, b;	// Delcarations
	char c; 

	a = 10;		// Assignment statements
	b = 20;  

	scanf("%c", &c);

	if(a > b) {
		printf("a > b = %i\n", a > b);	// Output
	}
	if (c >= 65 && c <= 90) {
		c = c + 32;
	}
	else if(x < 65 || c > 122) {
		printf("Your entered something other than a letter\n");
		return 0;
	}	
	printf("lowercase = %c\n", c);	//k
	
	return 0;	// Return value
}
