#include <stdio.h>
#include <stdint.h>

int main() {
    int b[20][20];

    FILE* ptr = fopen("11.txt", "r");
    
    int i, j, p;
    for (i = 0; i < 20; i++)
        for (j = 0; j <20; j++)
            fscanf(ptr, "%d", &b[i][j]);

    /*for (i = 0; i < 20; i++) {
        for (j = 0; j <20; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }*/

    long long max = -1;

    for (i = 0; i < 20; i++)
        for (j = 0; j < 20-3; j++) {
            p = b[i][j] * b[i][j+1] * b[i][j+2] * b[i][j+3];
            if (p > max)
                max = p;
            p = b[j][i] * b[j+1][i] * b[j+2][i] * b[j+3][i];
            if (p > max)
                max = p;
        }

    for (i = 0; i  < 20-3; i++) {
        for (j = 0; j  < 20-3; j++) {
            p = b[i][i] * b[i+1][i+1] * b[i+2][i+2] * b[i+3][i+3];
            if (p > max)
                max = p;
            p = b[j][j] * b[j+1][j+1] * b[j+2][j+2] * b[j+3][j+3];
            if (p > max)
                max = p;
        }
    }

    for (i = 0; i  < 20; i++) {
        for (j = 0; j  < 20; j++) {
            if (i >= 17 || j < 3) continue;
            p = b[i][j] * b[i+1][j-1] * b[i+2][j-2] * b[i+3][j-3];
            if (p > max)
                max = p;
        }
    }

    printf("%llu", max);
}
