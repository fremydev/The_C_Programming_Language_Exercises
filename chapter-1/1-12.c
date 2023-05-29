#include <stdio.h>


/* Program that prints its inputs one word per line. */
main () {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
}
