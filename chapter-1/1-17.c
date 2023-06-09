#include <stdio.h>

#define MAXLINE 1000

int lineget(char line[], int maxline);

/* print lines with more than 80 characters */
int main () {
	int len;
	char line[MAXLINE];

	while ((len = lineget(line, MAXLINE)) > 0) 
		if (len > 80)
			printf("%s", line);
	
	return 0;
}

int lineget(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}
