#include <stdio.h>
#include <complex.h>

int main(void) {
    printf("%.2f + %.2fi\n", crealf(_Complex_I), cimagf(_Complex_I));
}
