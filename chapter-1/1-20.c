#include <stdio.h>

#define TABSIZE  4

int main(void) {
	int c, nspaces;

	while((c = getchar()) != EOF) {
		if (c == '\t') {
			nspaces = TABSIZE;
			while (--nspaces)
				putchar(' ');
		}
		else {
			putchar(c);
		}
	}

	return 0;
}
