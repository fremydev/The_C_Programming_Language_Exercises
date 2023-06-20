#include <stdio.h>
#include <ctype.h>

int validrange(char begin, char end);
void expand(char s1[], char s2[]);

int main(void) {
    return 0;
}

int validrange(char begin, char end) {
    return (begin < end) && ((isdigit(begin) && isdigit(end))
        || (isalpha(begin) && isalpha(end)
        && ((islower(begin) && islower(end))
        || (isupper(begin) && isupper(end)))));
}

void expand(char s1[], char s2[]) {
    int i, j, k, dist;

    for (i = j = 0; s1[i] != '\0'; ++i)
        if (i != 0 && s1[i] == '-' && validrange(s1[i-1], s1[i+1])) {
            dist = s1[i+1] - s1[i-1];
            for (k = 1; k < dist; ++k, ++j)
                s2[j] = s1[i-1] +k;
        }
        else
            s2[j++] = s1[i];

    s2[j] = '\0';

}
