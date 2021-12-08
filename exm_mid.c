#include <stdio.h>

int main() {

    int number, base = 7;
    scanf("%d", &number);

    while (number > 0) {
        printf("%d", (number%7));
        number /= 7;
    }


    return 0;
}