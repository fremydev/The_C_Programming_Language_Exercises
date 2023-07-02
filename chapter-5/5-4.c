#include <stdio.h>
#include <string.h>

int strend(char *, char *);

int main(void) {
	return 0;
}

int strend(char *s, char *t) {
	s += strlen(s) - strlen(t);
	while (*s && *t)
		if (*s++ != *t++) return 0;

	return 1;
}

