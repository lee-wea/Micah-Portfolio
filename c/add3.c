#include <stdio.h>

// Ask the user for 3 integers 
// Use scanf("%i", varname);
// Print out the sum of all 3 variables 

int main() {
	int x, y, z;
	printf("Enter the first number: ");
	scanf("%i", &x);
	printf("Enter the second number: ");
	scanf("%i", &y);
	printf("Enter the third number: ");
	scanf("%i", &z);
	printf("The sum of your numebers is: %i\n", x + y + z);
	return 0;	
}
