#include <stdio.h>

void strcat(char *, char *);

int main(void) {
	return 0;
}

void strcat(char *s, char *t) {
	while (*s) ++s;
	while ((*s++ = *t++));
}
