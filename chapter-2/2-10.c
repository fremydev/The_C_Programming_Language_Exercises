#include <stdio.h>

int lower(char c);

int main(void) {
    return 0;
}

int lower(char c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
