#include <stdio.h>

int dim[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

/*
 * 1 - Mon
 * 2 - tues
 * 3 - Wed
 * 4 - THrus
 * 5 - Fri
 * 6 - Sat
 * 7 - Sun
 */

int diw = 1;
int d = 1;
int m = 1; 
int y = 1901;

int gd() {
    if (m != 2)
        return dim[m];
    else
        if ((y % 4 == 0 && y % 100 == 0) || y % 400 == 0)
            return dim[m] + 1;
        else return dim[m];
}

int main() {
    int r = 0;

    while (y != 2001) {
        diw++;
        while (diw > 7)
            diw-=7;
        d++;
        if (d > gd()) {
            m++;
            d = 1;
        }
        if (m > 12) {
            y++;
            m = 1;
        }
        if ( diw == 7 && d == 1 )
            r++;
    }
    
    printf("%d", r);

}
