#include<stdio.h>

int main() {
    float s1,s2,s3,s4,s5,total, avg;
    printf("Enter the marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    avg = total/5;

    printf("Total marks %.2f and Average is %.2f", total, avg);

    return 0;
}
