#include <stdio.h>

#define MAXSIZE 1000

int leftbracket;
int leftparenthese;
int leftbrace;

int rightbracket;
int rightparenthese;
int rightbrace;

int insidecomment;
int insidechar;
int insidestring;

int lineget(char line[], int maxsize);
void isbalanced(char line[]);
void printinfo(void);

int main(void) {
	char line[MAXSIZE];

	extern int leftbracket;
	extern int leftparenthese;
	extern int leftbrace;

	extern int rightbracket;
	extern int rightparenthese;
	extern int rightbrace;

	extern int insidecomment;
	extern int insidechar;
	extern int insidestring;
	

	leftbracket = 0;
	leftparenthese = 0;
	leftbrace = 0;

	rightbracket = 0;
	rightparenthese = 0;
	rightbrace = 0;

	insidecomment = 0;
	insidechar = 0;
	insidestring = 0;

	while (lineget(line, MAXSIZE) > 0)
		isbalanced(line);	

	printinfo();

	return 0;
}

int lineget(char s[], int lim) {
	int i, c;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
		s[i] = c;	

	s[++i] = '\0';

	return i;
	
}

void isbalanced(char line[]) {
	int i;

	extern int leftbracket;
	extern int leftparenthese;
	extern int leftbrace;

	extern int rightbracket;
	extern int rightparenthese;
	extern int rightbrace;

	extern int insidecomment;
	extern int insidechar;
	extern int insidestring;


	for (i = 0; line[i] != '\0'; ++i) {
		if (line[i] == '\'')
			insidechar = !insidechar; 
		else if (line[i] == '"')
			insidestring = !insidestring;
		else if (i != 0 && line[i] == '*' && line[i-1] == '/')
			insidecomment = 1;
		else if (i != 0 && line[i] == '/' && line[i-1] == '*')
			insidecomment = 0;

		if (line[i] == '[' && !insidechar && !insidestring && !insidecomment)
			++leftbracket;
		else if (line[i] == '(' && !insidechar && !insidestring && !insidecomment)
			++leftparenthese;
		else if (line[i] == '{' && !insidechar && !insidestring && !insidecomment)
			++leftbrace;
		else if (line[i] == ']' && !insidechar && !insidestring && !insidecomment)
			++rightbracket;
		else if (line[i] == ')' && !insidechar && !insidestring && !insidecomment)
			++rightparenthese;
		else if (line[i] == '}' && !insidechar && !insidestring && !insidecomment)
			++rightbrace;

	}


}

void printinfo(void) {
	extern int leftbracket;
	extern int leftparenthese;
	extern int leftbrace;

	extern int rightbracket;
	extern int rightparenthese;
	extern int rightbrace;

	if ((rightbracket - leftbracket) != 0)
		printf("Unbalanced brackets!\n");
	if ((rightparenthese - leftparenthese) != 0)
		printf("Unbalanced parentheses!\n");
	if ((rightbrace - leftbrace) != 0)
		printf("Unbalanced braces!\n");
}
