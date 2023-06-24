#include <ctype.h>

double atof(char s[]);

int main(void) {
	return 0;
}

double atof(char s[]) {
	double val, power, exp;
	int i, sign, expsign;

	for (i = 0; isspace(s[i]); i++);
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-') i++;

	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.') i++;

	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	if (tolower(s[i] == 'e')) i++;

	expsign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-') i++;

	for (exp = 0.0; isdigit(s[i]); i++)
		exp = 10.0 * exp + (s[i] - '0');

	while (exp-- != 0)
		power = (expsign > 0) ? power / 10 : power * 10;

	return sign * val / power;
}
