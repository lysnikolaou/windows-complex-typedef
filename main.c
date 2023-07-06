#include <stdio.h>
#include <complex.h>

typedef _Dcomplex npy_cdouble;

int main(void) {
    npy_cdouble x = _Cbuild(2.0f, 3.0f);
    printf("%.2f + %.2fi\n", creal(x), cimag(x));
}
