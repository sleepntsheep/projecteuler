#include <stdio.h>
#include <math.h>

int main() {
    int n = 100;

    printf("%f", (pow(n*(n+1)/2, 2) - n*(n+1)*(2*n+1)/6));
}
