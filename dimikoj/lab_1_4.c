#include<stdio.h>

int main() {
double h, w;

printf("Enter Width: ");
scanf("%lf", &w);
printf("Enter Height: ");
scanf("%lf", &h);

printf("Area is %.2lf", (w*h));

return 0;
}
