#include <stdio.h>

void itob(unsigned n, char s[], int b);
void reverse(char s[]);

int main(void) {
    return 0;
}

void itob(unsigned n, char s[], int b) {
    int i, sign, digit;
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    if (b == 10 && (sign = n) < 0) n = -n;
    i = 0;
    do {
        digit = n % b;
        s[i++] = baseDigits[digit];
    }
    while ((n /= b) >0);

    if (b == 10 && sign < 0) s[i++] = '-';
    s[i] = '\0';

    reverse(s);
}

