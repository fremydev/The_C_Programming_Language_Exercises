#include <stdio.h>

/* write a program that replaces multiple blankspaces to a single one */
main () {
	int c, pblank;
	pblank = -1;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && pblank != 1) {
			pblank = 1;
			putchar(c);
		}
		else if (c == ' ' && pblank == 1)
			pblank = 1;
		else {
			pblank = 0;
			putchar(c);
		}
	}
}
