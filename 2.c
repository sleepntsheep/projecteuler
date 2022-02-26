#include <stdio.h>
#include <stdint.h>

int f[4000010];

int main() {
    f[1] = 1;
    f[2] = 2;
    long long r = 0;

    for (int i = 3; i < 4000001; i++) {
        f[i] = f[i-1] + f[i-2];
        r += (f[i] % 2 == 0) * f[i];
    }

    printf("%llu", r);
}
