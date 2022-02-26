#include <stdio.h>

int main() {
    int n = 20;
    int i;

    for (i = 20; ; i++) {
        int p = 1;

        for (int j = 1; j <= n; j++) {
            p = (i % j == 0);
            if (!p)
                break;
        }
        if (p) {
            break;
        }
    }
    printf("%d", i);
    
}
