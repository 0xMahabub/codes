#include <stdio.h>
#include <math.h>

int find_fact(int);
int imd_prev_prime(int);
int find_prime(int);
int find_perfect(int);
int find_fibonacci(int);

void main() {
    int num;
    scanf("%d", &num);
    printf("Fact of %d = %d", num, find_fact(num));
    printf("\nImediate Prev Prime %d", imd_prev_prime(num));

    if (find_perfect(num) == 1) {
        printf("\n%d is perfect", num);
    }
    else {
        printf("\n%d is not perfect", num);
    }

    printf("\n%dth fib num: %d", num, find_fibonacci(num));
}

int find_fact(int num) {
    int i, product=1;
    for (i=1; i<=num; i++) {
        product *= i;
    }

    return product;
}

int imd_prev_prime(int num) {
    int i, res;
    i = num;
    while (1) {
        if (find_prime(i-1) == 1)
            break;

        i--;
    }

    res = i-1;

    return res;
}

int find_prime(int p) {
    int x, r=1;
    for (x=2; x<=sqrt(p); x++) {
        if (p%x == 0) {
            r=0;
            break;
        }
    }

    return r;

}

int find_perfect(int num) {
    int i, tmp = 0;
    for (i=1; i<=num/2; i++) {
        tmp += i;
    }

    if (find_fact(num) == tmp) {
        return 1;
    }
    else {
        return 0;
    }
}


int find_fibonacci(int n) {
    int i,tmp, res = 1;

    for (i=1, tmp=1; i<n; i++) {
        res = i + tmp;
        tmp = i;
    }

    return res;

}






