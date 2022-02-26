#include <stdio.h>
#include <math.h>

int aD(int n, int d) {
    return (n / (int)pow(10, d - 1)) % 10;
}

int isP(int n) {
    int p = 1;
    int d = (int)log10((double) n) + 1;
    for (int i = 1; i <= d / 2 ; i++) {
        if (aD(n, i) != aD(n, d-i+1)) {
            p = 0;
        }
    }

    return p;
}

int main() {
    int max = -1;
    int pp;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            pp = i * j;
            if (isP(pp) && pp > max)
                max = pp;
        }
    }

    printf("%d", max);
}
