#include<stdio.h>

int main() {
double cm,m,km;

printf("Enter length in cm: ");
scanf("%lf", &cm);
m = cm/100;
km = m/1000;
printf("in meter: %.2lf m and in kilo-meter: %.2lf km", m, km);

return 0;
}
