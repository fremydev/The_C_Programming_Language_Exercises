#include <stdio.h>

#define IN 1 /* indisde a word */
#define OUT 0 /* outside a word */

/* given this program that count words:
   how would yout test it ? what kinds of inputs are most likely to have bugs if there are any ?

	Answer: Given what we are considering a word in this exercise, we can test, an empty input, only blanks inputs, a long word, a lot of blanks/tabs/newlines subsequent.. */

main() {
	int c, state, nw, nl, nc;

	state = OUT;
	nw = nl = nc = 0;

	while ((c = getchar()) != EOF) {
		++nc;
		
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if (state == OUT) {
			++nw;
			state = IN;
		}
	}

	printf("%d %d %d", nw, nl, nc);
}
