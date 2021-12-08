#include <stdio.h>

int fact_cal(int v);

int main () {
    int n, i;
    long double sum = 0;
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        sum += (float) (1.0 / fact_cal(i));
    }

    printf("\nsum is %llf", sum);


    return 0;
}

int fact_cal(int v) {
    long long int fact = 1;
    for (int z=1; z <= v; z++) {
        fact *= z;
    }
    printf("%lld\n", fact);

    return fact;
}
