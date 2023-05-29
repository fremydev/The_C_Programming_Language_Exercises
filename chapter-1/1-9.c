#include <stdio.h>

/* write a program that replaces multiple blankspaces to a single one */
main () {
	int c, pc;
	pc = -1;
	while ((c = getchar()) != EOF) {
		if (c != ' ' || pc != ' ') {
			putchar(c);
		}
		pc = c;
	}
}
