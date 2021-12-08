#include <stdio.h>

int main () {
    int y;
    float i, x;

    printf("i\t\ty\tx\n"); // table header

    for (y=1; y <= 6; y++) {
        // calculate for table values

        for (x = 5.5; x <= 12.5; x = x + 0.5) {
            // given formula
            i = 2 + (y + 0.5 * x);

            printf("%.2f\t%d\t%.2f\n", i, y, x);
        }
    }


    return 0;
}
