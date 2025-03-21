#include <stdio.h>
#define O 0xFACADE
#define _(x) ((x) ^ O)
typedef int I; typedef char C;
I O_(I x, I y) { return (x & y) + ((x ^ y) >> 1); }
void __ (C* s) { while (*s) putchar(_(*s++)); }
I main() {
    C msg[] = {0x95, 0x9F, 0x93, 0x9D, 0xDA, 0xDA, 0x9E, 0x96, 0x9B, 0x9D, 0xDA, 0};
    __ (msg);
    I a = 21, b = 42;
    printf("\n%d\n", O_(a, b));
    return O_;
}
