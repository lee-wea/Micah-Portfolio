#include <stdio.h>

int main () {
	char str[20];

	printf("Enter a word for: "); 
	scanf("%s", &str);
	for(int i = 0; str[i] != 0; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
			printf("Your word: %i\n", str[i]);
			}
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
			printf("Your word: %i\n", str[i]);
		}
	}
	printf("Something: %s\n", str);
	return 0;
}
	
