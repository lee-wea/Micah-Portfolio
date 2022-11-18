#include <stdio.h>

int main() {
	int x, y;
	printf("Enter the length: ");
	scanf("%i", &x);
	printf("Enter the width: ");
	scanf("%i", &y);
	int z = x * 2 +  y * 2;
	printf("The perimeter of your rectangle is: %i\n", z);
	return 0;	
}
