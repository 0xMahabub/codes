#include <stdio.h>

int main() {
    // input your age, if age < or = 30 then u can apply for jobs or not
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 30)
        printf("You can apply for the job");
    else
        printf("You cannot apply for the job");


    return 0;
}
