#include <stdio.h>

#define MAXLEN 1000
#define LINESIZE 80

int main(void) {
	char c, currentsize, currentline, currentblank;
	char text[MAXLEN];

	currentblank = 0;
	for (currentsize = 0, currentline = 0; (c = getchar()) != EOF && currentsize < MAXLEN; ++currentsize, ++currentline) {
		text[currentsize] = c;

		if (c == ' ' || c == '\t')
			currentblank = currentsize;
		else if (c == '\n') 
			currentline = 0;

		if (currentline == LINESIZE) {
			text[currentblank] = '\n';
			currentline = 0;
		}

	}

	text[++currentsize] = '\0';
	printf("%s\n", text);

	return 0;
}
