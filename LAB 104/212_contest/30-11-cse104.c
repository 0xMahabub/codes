#include <stdio.h>


// factorial
int fact(int f) {
    int product = 1;
    for (int x=1; x<=f; x++) {
        product *= x;
    }
    return product;
}

// prime
int isPrime(int p) {
    if (p <= 1)
        return 0;
    for (int a=2; a<p; a++) {
        if (p%a == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, prime=0, perfect=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    

    for (int i=0; i<n; i++) {
        if (arr[i] != 1 || isPrime(arr[i]))
            prime++;
        else if (arr[i] == fact(arr[i]))
            perfect++;
    }

    printf("Perfects: %d\nPrimes: %d", perfect, prime);


    return 0;
}