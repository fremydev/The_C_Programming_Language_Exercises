#include <stdio.h>

#define MAXSIZE 1000
#define TABSIZE 4

int lineget(char line[], int maxsize);
void entab(char original[], char entabed[]);

int main(void) {
	char line[MAXSIZE], entabedline[MAXSIZE];

	while(lineget(line, MAXSIZE) > 0) {
		entab(line, entabedline);
		printf("%s", entabedline);
	}	

	return 0;
}

int lineget(char s[], int lim) {
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c = '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;

}

void entab(char original[], char entabed[]) {
	int i, j, nspaces;

	for (i, j = 0; original[i] != '\0'; ++i) {
		if (original[i] == ' ') {
			++nspaces;
			if (nspaces == TABSIZE) {
				entabed[j] = '\t';
				nspaces -= TABSIZE;
				++j;
			}
		}	
		else {
			if (nspaces > 0) {
				entabed[j] = ' ';
				--nspaces;
				++j;	
			}	
			else {
				entabed[j] = original[i];
				++j;
			}
		}
	}

	entabed[++j] = '\0';
}
