#include <stdio.h>
#include <include/c.h>

int main(void) {
    npy_cdouble x = _Cbuild(2.0f, 3.0f);
    printf("%.2f + %.2fi\n", creal(x), cimag(x));
}
