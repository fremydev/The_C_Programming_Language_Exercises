#include <stdio.h>

#define SIZE 9
#define IN 1
#define OUT 0

/* histogram of words length */

main() {
	int c,state, i, j, count, lengths[SIZE];	

	state = OUT;
	count = 0;
	for (i = 0; i < SIZE; ++i)
		lengths[i] = 0;

	while((c = getchar()) != EOF)
		if (c == '\n' || c == ' ' || c == '\t') {
			if (count > 8)
				++lengths[SIZE-1];
			else
				++lengths[count];
			count = 0;
		}
		else 
			++count;	


	printf("Horizontal Histogram\n");
	for (i = 1; i < SIZE; ++i) {
		printf(" %d\t", i);
		for (j = 0; j < lengths[i]; ++j)
			printf("#");
		printf("\n");
	}

}
