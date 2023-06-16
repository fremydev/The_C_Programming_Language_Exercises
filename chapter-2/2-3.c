#include <stdio.h>
#include <ctype.h>


int htoi(char s[]);

int main(void) {
	char hexastring[13] = "0Xff0011bbd0";

	printf("%d\n", htoi(hexastring));

	return 0;
}

/* Converts a string of hexadecimal (it can start with 0x) value to a decimal integer and return it */
int htoi(char s[]) {
		int i, n;

		n = 0;
		for (i = 0; s[i] != '\0'; ++i) {
			if (i == 0 && s[i] != '0' || i == 1 && tolower(s[i]) != 'x')
				continue;
			n *= 16;
			if (s[i] >= '0' && s[i] <= '9')
			n += s[i] - '0';
			else if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f')
			n += tolower(s[i]) - 'a';
		}
		return n;
}
