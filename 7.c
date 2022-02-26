#include <stdio.h>
#include <math.h>

int isP(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main() {
    int b = 0;
    int i;
    for (i = 2;; i++) {
        if (isP(i)){
            b++;
            if (b == 10001)
                break;
        }
    }

    printf("%d", i);
}
