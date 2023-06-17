#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void) {
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return (x & ~(~(~0 << n) << p)) | ((y & ~(~0 << n)) << p );
}
