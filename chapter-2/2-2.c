#include <stdio.h>

#define MAXLINE 1000

int main(void) {

	int i = 0;
	char c;

	while(i >= 0)
		if (i >= MAXLINE - 1)
			i = -1;
		else if ((c = getchar()) == '\n')
			i = -1;	
		else if (c == EOF)
			i = -1;
		else
			++i;

	return 0;
}
