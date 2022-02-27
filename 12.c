#include <stdio.h>
#include <string.h>
#include <math.h>

int divisorCount(long long num) {
    int r = 0;
    for (int i = 1; i <= sqrt(num); i++)
        r += ((num % i == 0) * 2 + (i*i == num));

    return r;
}

/*int fastdivisorCount(long long num) {
    int aa[(int)sqrt(num) +1];
    int ab[num];
    memset(aa, 0, sizeof aa);
    memset(ab, 0, sizeof ab);
    
    while (num != 1) {
        for (int i = 0; i < 

    }
}*/

int main() {
    int i = 1;
    while (++i){
        long long tri = i*(i+1) / 2;
        if (divisorCount(tri) > 500)
        {
            printf("%lld", tri);
            return 0;
        }
    }
}
