#include <stdio.h>
#include <math.h>
/// find a number is prime or not using UDF (no argument passed and no return value).

int isPrime(); // declaring UDF

void main() {
    int res = isPrime(); // calling UDF
    if (res == 1)
        printf("YES");
    else
        printf("NO");
}

int isPrime() {
    int n, a=1, i;
    scanf("%d", &n);
    for (i=2; i<=sqrt(n); i++) {
        if (n%i == 0) {
            a=0;
            break;
        }
    }

    // Result
    if (a != 0)
        return 1;
    else
        return 0;
