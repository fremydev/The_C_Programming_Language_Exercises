#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrtocelsius(int f);

/* Convert from fahrenheit to celsius using functions  */
int main() {
	int fahr;

	for (fahr = 0; fahr <= UPPER; fahr += STEP)
		printf("%d\t%.1f\n", fahr, fahrtocelsius(fahr));

	return 0;
}

/* return the temperature in celsius given a temperature in fahrenheit */
float fahrtocelsius(int fahr) {
	return (5.0/9.0) * (fahr - 32);
}
