#include <stdio.h>

#define START_CHAR '!'
#define END_CHAR '~'
#define SIZE (END_CHAR - START_CHAR + 1) 

/* program to print a histogram of the frequencies of diferent characters in its input.  */
main() {
	int i, j,  c, charcount[SIZE];

	for (i = 0; i < SIZE; ++i)
		charcount[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c >= '!' && c <= '~')
			++charcount[c-'!'];

	printf("Horizontal Histogram\n");
	for (i = 0; i < SIZE; ++i) {
		printf(" %c\t", i+START_CHAR);
		for (j = 0; j < charcount[i]; ++j)
			printf("#");
		printf("\n");
	}
}
