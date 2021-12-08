
#include <stdio.h>
///  to check a year is a leap year or not.

int main() {
    int y;

    printf("Enter the year: ");
    scanf("%d", &y);

    if (y%400 == 0 || (y%4 == 0 && y%100 != 0))
        printf("%d is a leap year", y);
    else
        printf("%d is not a leap year", y);

    return 0;
}
