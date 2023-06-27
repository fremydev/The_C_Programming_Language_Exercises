#include <stdio.h>
#include <ctype.h>


int getch(void);
int ungetch(int);
int getfloat(double *);

int main(void) {
	return 0;
}

int getfloat(double *pn) {
	int c, sign;
	double i;

	while (isspace((c = getch())));

	if (!isdigit(c) && c != '.' && c != '+' && c != '-') {
		ungetch(c);
		return 0;
	}

	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		if (!isdigit((c = getch()))) return 0;

	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	if (c == '.')
		for (i = 10.0f; isdigit(c = getch()); i = i * 10.0f)
			*pn += (c - '0') / i;

	*pn *= sign;
	ungetch(c);
	return c;

}
