#include <stdio.h>

int main() {
    int N, a,b,c;
    scanf("%d", &N);

    while (N != 0) {
        scanf("%d %d %d", &a, &b, &c);
        if ((a>b && a<c) || (a<b && a>c)) {
            printf("%d\n", a);
        }
        else if ((b>a && b<c) || (b<a && b>c)) {
            printf("%d\n", b);
        }
        else {
            printf("%d\n", c);
        }
        N--;
    }

    return 0;
}