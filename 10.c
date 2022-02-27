#include <stdio.h>
#include <stdint.h>
#include <math.h>

int isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (!(n % i))
            return 0;
    return 1;
}

long long primeSumUnder(int n) {
    long long r = 0;
    for (int i = 2; i < n; i++)
        r += isPrime(i) * i;

    return r;
}

int main() {
    printf("%llu", primeSumUnder(2000000));

}
