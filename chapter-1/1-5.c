#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
#define FAHR_TO_CELSIUS(fahr) ((5.0/9.0) * (fahr - 32))

/* Fahrenheit to Celsius program reverse 300 to 0 8 */
main () {
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d %6.1f\n", fahr, FAHR_TO_CELSIUS(fahr));
}
