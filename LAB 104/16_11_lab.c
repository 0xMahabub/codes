#include <stdio.h>

int main() {

    int n1, n2, tmp;

    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    for(int i=n1; i <= n2; i++) {
        tmp = 0;
        for(int j=2; j <= sqrt(i); j++) {
            if (i%j == 0) {
                tmp = 1;
                break;
            }
        }
        if (tmp == 0) printf("%d\n", i);
    }

    return 0;
}
