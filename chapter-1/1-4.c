#include <stdio.h>

/* Program to convert from Celsius to Fahrenheit */
main () {
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("CELSIUS\tFAHRENHEIT\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius / (5.0/9.0)) + 32.0;
		printf("%7.0f\t%10.0f\n", celsius, fahr);

		celsius = celsius + step;
	}
	
}
