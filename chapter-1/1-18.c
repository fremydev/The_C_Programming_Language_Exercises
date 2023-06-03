#include <stdio.h>

#define MAXLINE 1000

int linegetWithoutBlanks(char line[], int maxline);

/* remove trailing blanks, tabs and entirely blank lines */
int main () {
	char line[MAXLINE];
	int len;

	while ((len = linegetWithoutBlanks(line, MAXLINE)) > 0 ) {
		if (len == 1 && line[0] == '\n')
			line[0] = '\0';
		printf("%s", line);
	}

	return 0;
}

int linegetWithoutBlanks(char s[], int lim) {
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n';) {
		if (i == 0) {
			s[i] = c;
			++i;
		}
		else if (c != '\t' && c != ' ') {
			s[i] = c;
			++i;
		}
		else if (s[i-1] != '\t' && s[i-1] != ' ') {
			s[i] = c;
			++i;
		}
	}

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}
