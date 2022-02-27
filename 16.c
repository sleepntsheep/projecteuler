#include <stdio.h>
#include <string.h>


char s[1000];

int main() {
    double r = 1;
    for (int i = 0; i < 1000; i++)
        r *= 2;
    int rr = 0;

    FILE *ptr = fopen("16t.txt", "w+");

    fprintf(ptr,"%f", r);

    rewind(ptr);

    fscanf(ptr, "%s", s);
    //printf("%s\n", s);
    int l = strlen(s);

    for (int i = 0; i < l; i++) {
        if (s[i] == '.') continue;
        rr += s[i] - '0';
    }

    printf("%d", rr);
}
