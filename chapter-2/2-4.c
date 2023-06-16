#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(void) {
    return 0;
}

/* Delete any char in s1 that is included in s2 */
void squeeze(char s1[], char s2[]) {
    int i, j, k;

    for (i = j = k = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] != '\0' && s1[i] != s2[j]; ++j);
        if (s2[j] == '\0') s1[k++] = s1[i];
    }
}
