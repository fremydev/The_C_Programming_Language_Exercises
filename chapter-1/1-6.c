#include <stdio.h>

/* Verify that getchar() != EOF is 0 or 1 */
main() {
	int c;

	while((c = getchar()) != EOF) {
		putchar(c);
		printf(" | Value of c != EOF is: %d\n", c != EOF);
	}
}
