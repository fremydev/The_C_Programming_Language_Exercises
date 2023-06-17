#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(void) {
    return 0;
}


unsigned invert(unsigned x, int p, int n) {
   return (x & ~(~(~0 << n) << p)) | (~(~0 << n) & ~(x & ~(~0 << n) << p));
}
