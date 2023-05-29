#include <stdio.h>

/* get inputs from user and replaces \t for \\t \b for \\b and \ to \\ */
main () {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}
