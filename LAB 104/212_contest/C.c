#include <stdio.h>

int main() {
    int N, n, sum;
    scanf("%d", &N);

    while (N > 0) {
        sum = 0;
        scanf("%d", &n);
        sum += (n%10);
        while (n > 0) {
            if (n > 0 && n < 10) {
                sum += n;
            }
            n /= 10;
        }
        printf("%d\n", sum);
        N--;
    }

    return 0;
}