#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int lineget(char line[], int max);
int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(void) {
	char line[MAXLINE];
	char found = 0;

	while (lineget(line, MAXLINE) >= 0)
		if (strrindex(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		}
	return found;
}

int lineget(char s[], int lim) {
	int c, i;

	return i;
}

int strrindex(char s[], char t[]) {
	int i, j, k;

	for (i = strlen(s) - strlen(t); i >= 0; i--) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
		if (k > 0 && t[k] == '\0') return i;
	}	
	return -1;
}
