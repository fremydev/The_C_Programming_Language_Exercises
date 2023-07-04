#include <stddef.h>
#include <stdio.h>
#include <string.h>

#define MAXCHAR 32

char *strnCpy(char *, char *, const size_t);
char *strnCat(char *, char *, const size_t);
int strnCmp(const char *, const char *, const size_t);

int main(void) {
	return 0;
}


char *strnCpy(char *s, char *t, const size_t n) {
	size_t i;

	for (i = 0; i < n; i++)
		if (!(*s++ = *t++)) *s = '\0';

	*s = '\0';

	return s-n;
}

char *strnCat(char *s, char *t, const size_t n) {
	size_t i, s_len, t_len, lim;

	s += (s_len = strlen(s));
	lim = (n > (t_len = strlen(t))) ? t_len : n;
	for (i = 0; i < lim && (*s++ = *t++); ++i);
	*s = '\0';
	return s - s_len - i;
}

int strnCmp(const char *s, const char *t, const size_t n) {
	size_t i; 

	for (i = 1; i < n && *s == *t; ++s, ++t, ++i)
		if (*s == '\0') return 0;
	return *s - *t;
}
