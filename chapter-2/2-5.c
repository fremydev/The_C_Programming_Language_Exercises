#include <stdio.h>

int any(char s1[], char s2[]);

int main(void) {
    return 0;

}

/* any: returns the index of the first ocurrency of any s2 character in s1, -1 if no value is found */
int any(char s1[], char s2[]) {
    int i, j;

    for(i = j = 0; s1[i] != '\0'; ++i)
        for(; s2[j] != '\0'; ++i)
            if (s1[i] == s2[j]) return i;

    return -1;
}
