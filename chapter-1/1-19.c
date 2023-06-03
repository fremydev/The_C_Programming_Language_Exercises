#include <stdio.h>

#define MAXLINE 1000

int  lineget(char [], int maxline);
void reverse(char [], int len);

int main(void)
{
	int  len;
	char line[MAXLINE];

	while ((len = lineget(line, MAXLINE)) > 0) {
		line[--len] = '\0';
		reverse(line, len);
		printf("%s\n", line);
	}
	return 0;
}

int lineget(char s[], int lim)
{
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

void reverse(char s[], int len)
{
	int i, j, temp;


	for (i = 0, j = len - 1; i < len / 2; ++i, --j) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
