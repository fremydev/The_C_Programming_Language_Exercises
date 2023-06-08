#include <stdio.h>

#define MAXSTRING 10000

int main(void) {
	char c, prevc, prev2c;
	int inchar, instr, incomment;
	inchar = instr = incomment  = 0;

	prevc = getchar();
	while ((c = getchar()) != EOF) {
		if (c == '"')
			instr = !instr;
		else if (c == '\'')
			inchar = !inchar;

		if (!inchar && !instr && prevc == '/' && c == '*')
			incomment = 1;
		else if (!inchar && !instr && prev2c == '*' && prevc == '/')
			incomment = 0;

		if (!incomment)
			putchar(c);

		prev2c = prevc;
		prevc = c;
	}

	return 0;
	
}

