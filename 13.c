#include <stdio.h>
int re[52];

int main() {
    FILE *ptr = fopen("13.txt", "r");
    char c[100][50];
    for (int i = 0; i < 100; i++) {
        fscanf(ptr, "%s", c[i]);
        printf("%s\n", c[i]);
    }


    for (int i = 49; i >= 0; i--) {
        int r = 0;
        for (int j = 0; j < 100; j++) 
            r += c[j][i] - '0';
        re[i] += r;
    }

    int u = 10;
    while (u--){
        for (int i = 49; i > 0; i--) {
            int p = re[i];
            if (p/10) {
                re[i] = p % 10;
                re[i-1] += p / 10;
            }
        }
    }

    for (int i  =0; i < 12; i++) 
        printf("%d ", re[i]);

}
