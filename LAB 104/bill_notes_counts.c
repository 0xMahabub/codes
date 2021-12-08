#include <stdio.h>

int main() {
    int bill, _20 = 0,  _10 = 0,  _5 = 0, _1 = 0;

    printf("Enter the bills = ");
    scanf("%d", &bill);

    // 20, 10, 5, 1
    _20 = bill / 20;
    _10 = (bill - 20*_20) / 10;
    _5 = (bill - (20*_20 + 10*_10)) / 5;
    _1 = (bill - (20*_20 + 10*_10 + 5*_5));

    printf("$20 => %d\n$10 => %d\n$5 => %d\n$1 => %d", _20, _10, _5, _1);

    return 0;
}
