#include <stdio.h>
#include <string.h>

int lineget(char *s, int lim);
void reverse(char *s);
int strindex(const char *s, const char *t);

int main(void) {
	return 0;
}

int lineget(char *s, int lim) {
	int c;
	char *len;

	len = s;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n') *s++ = c;
	if (c == '\n') *s++ = c;
	*s = '\0';
	return strlen(len);
}

void reverse(char *s) {
	char *p, *q, tmp;

	q = s + strlen(s) -1;
	for (p = s; p < q; ++p, --q) {
		tmp = *p;
		*p = *q;
		*q = tmp;
	}
}

int strindex(const char *s, const char *t) {
	int pos;
	const char *j, *k;

	for (pos = 0; *s; ++s, ++pos) {
		for (j = s, k = t; *k && (*j == *k); ++j, ++k);
		if (k > t && *k == '\0') return pos;
	}
	return -1;
}
