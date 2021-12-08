#include <stdio.h>

int main() {
    int N, n, sum;
    scanf("%d", &N);

    while (N > 0) {
        scanf("%d", &n);
        sum = 0;
        while (n > 0) {
            sum += (n%10);
            n /= 10;
        }

        printf("%d\n", sum);

        N--;
    }

    return 0;
}
