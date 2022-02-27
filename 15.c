#include <stdio.h>

double fac(int n) {
    if (n == 0) return 1;
    return (n * fac(n-1));
}

int main() {
    int n = 20, m = 20;
    printf("%f", fac(40)/(fac(20)*fac(20)));
}
