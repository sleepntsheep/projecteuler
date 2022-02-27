#include <stdio.h>

int collat(long long a) {
    int len = 1;
    while (a != 1) {
        if (a % 2 == 0)
            a = a / 2;
        else  a = 3 * a + 1;
        len++;
    }
    return len;
}


int main (){
    int n = 1000000;
    int max = -1;
    int maxs = -1;
    int i;
    long long len;

    for (i = 1; i < n; i++) {
        len = collat(i);
        printf("%d %lld\n", i, len);
        if (len > max) {
            max = len;
            maxs = i;
        }
    }

    printf("%d", maxs);
}
