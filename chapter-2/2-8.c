#include <stddef.h>
#include <stdio.h>

size_t int_size();
unsigned rightrot(unsigned x, int n);

int main (void) {
    return 0;
}


/* returns the size of int */
size_t int_size() {
    int x = ~0;
    size_t i;

    while (x != 0) {
        x <<= 1;
        ++i;
    }

    return i;
}

/* return x right rotated n times */
unsigned rightrot(unsigned x, int n){
    unsigned size, bits;

    size = int_size();
    n = n % size;
    bits = x & ~(~0 << n);

    return (x >> n) | bits << (size - n);
}
