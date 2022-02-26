#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[1000];
int main() {
    int index = 0;
    FILE *f = fopen("8.txt", "r");

    while (!feof (f)) {
        char c = fgetc(f);
        if (isascii(c) && c != '\n' && c != ' ')
            a[index++] = c;
    }

    int n = 13; 
    //printf("%s", a);

    double max = -1;
    for (int i = 0; i < strlen(a) - n; i++) {
        double r = 1;
        for (int j = 0; j < 13; j++)
            r *= a[i+j] - '0';
        if (r > max) max = r;
    }
    printf("%f", max);
}
