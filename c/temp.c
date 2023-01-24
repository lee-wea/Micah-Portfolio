#include <stdio.h>

int main()
{ 
	float Fahrenheit, Celsius;
	
	printf("Add a number for the temperature: ");	
	scanf("%f", &Fahrenheit);
	
	Celsius = ((5.0 / 9.0) * (Fahrenheit - 32));

	printf("Temperature in Celsius is : %.1f\n", Celsius);
	
	return (0);
}


