#include <stdio.h>
#include <math.h>
/// find the digits from user input N (UDF)

int findDigit(); // declaring UDF

void main() {

    int res = findDigit();
    printf("%d", res);
}

int findDigit() {
    int n, i, c=0;
    scanf("%d", &n);

    while (n>0) {
        c++;
        n /= 10;
    }

    return c;
}


