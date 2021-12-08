
#include <stdio.h>

int main() {
    int base, power, res=1;
    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    while (power --) {
        res *= base;
    }
    printf("%d", res);


    return 0;
}
