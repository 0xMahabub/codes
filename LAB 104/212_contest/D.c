#include <stdio.h>

int main() {
    int N, n, rem, rev;
    scanf("%d", &N);

    while (N > 0) {
        scanf("%d", &n);
        rev = 0;
        while (n > 0) {
            rem = n%10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        printf("%d\n", rev);
        N--;
    }

    return 0;
}