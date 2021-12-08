#include <stdio.h>
/// take 2 numbers from user and find their sum using UDF

int addNums(int, int); // a simpe UDF

void main() {
    int n1, n2;
    printf("Enter 1st Num: ");
    scanf("%d", &n1);
    printf("Enter 2nd Num: ");
    scanf("%d", &n2);

    //addNums(n1, n2); // calling the function
    printf("Result => %d\n", addNums(n1, n2));
}

int addNums(int a, int b) {
    return (a+b);
}
