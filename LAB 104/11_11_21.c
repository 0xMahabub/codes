#include <stdio.h>

int main() {
    // sum of various terms in a input ranged
    int lv, mv, sum = 0;
    scanf("%d %d", &lv, &mv);

    for (int i = lv; i <= mv; i++) {
            // if i is even
            if (i%2 == 0) {
                sum += i;
            }
    }


    return 0;
}
