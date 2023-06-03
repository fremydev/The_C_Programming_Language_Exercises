#include <stdio.h>

#define MAXLINE 1000

int lineget(char line[], int maxline);
void copy(char to[], char from[]);

/* prints longest input line */
int main() {
	int len, max;
	char line[MAXLINE], longest[MAXLINE];

	max = 0;
	while((len = lineget(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("length: %d \n%s",max, longest);

	return 0;
}

/* lineget: read a line into s, return its length */
int lineget(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n' || i == lim-1) {
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';

	while (c != EOF && c != '\n') {
		++i;
		c = getchar();
	}

	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
