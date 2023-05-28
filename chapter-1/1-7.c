#include <stdio.h>

/* Prints the value of EOF */
main() {
	int c;

	while((c = getchar()) != EOF)
		putchar(c);

	printf("EOF VALUE: %d\n",EOF);
}
