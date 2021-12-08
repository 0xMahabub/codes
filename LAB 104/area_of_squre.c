#include<stdio.h>

int main() {
    double c,f;
    printf("Enter temperature in F: ");
    scanf("%lf", &f);
    c = (f - 32)*5 / 9;
    printf("Temperature in C: %.2lf C", c);

    return 0;
}
