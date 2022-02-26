#include <stdio.h>
#include <stdint.h>
#include <math.h>

int p[100000];
int pi;

int isPrime(int n) {
    int r = 1;
    for (int i = 2; i < sqrt(n); i++)
        if (r % i == 0)
            r = 0;

    return r;
}

int main() {
    long long n = 600851475143;
    int max = -1;
    //scanf("%d", &n);
    while ( n != 1 ){
        for (int j = 2; j <= (n); j++){
            if (n % j == 0) {
                if (!isPrime(j)) continue;
                p[j] = 0;
                n /= j;
                if (j > max)
                    max = j;
            }
        }
    }


    printf("%d", max);

}
