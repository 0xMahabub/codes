#include <stdio.h>

int main() {
    int y, a, b, c, d;
    scanf("%d", &y);

    while (y > 0) {
        y++;
        a = y/1000;
        b = (y%1000) / 100;
        c = ((y%1000)%100) / 10;
        d = ((y%1000%100)) % 10;

        if (
            a!=b && a!=c && a!=d && b!=c && b!=d
            && c!=d
        )
        {
            break;
        }
    }
    printf("%d", y);
    return 0;
}