#include <stdio.h>

int main () {
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    long long int fact(long long int f) {
        long long int i, product = 1;
        for (i=1; i<=f; i++) {
            product *= i;
        }
        return product;
    }


    for (int i = 1; i <= n; i++) {
        if (i == n) {
            printf("1/%d!", i);
        }
        else {
            printf("1/%d! + ", i);
        }
        sum += ( (double) 1 / fact(i) );
    }

    printf(" = %0.4lf", sum);

    return 0;
}