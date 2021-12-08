#include <stdio.h>

int main() {
    int N, d1, d2, count = 0;
    int tmp1, tmp2;
    scanf("%d", &N);
    while (N > 0) {
        scanf("%d", &d1);
        scanf("%d", &d2);
        tmp1 = d1 % 10;
        tmp2 = d2 % 10;
        if (tmp1 != tmp2) {
            if (tmp1 > tmp2) {
                for (int i=tmp1; i>tmp2; i--) {
                    if (i == 9 && tmp2 == 0) {
                        count++;
                        break;
                    }
                    else if (i == 9) {
                        count += 2;
                        i=tmp2+1;
                        tmp2 = 1;
                    }
                    else {
                        count ++;
                    }
                }
            }
            else {
                for (int i=tmp1; i<tmp2; i++) {
                    if (i == 0 && tmp2 == 1) {
                        count++;
                        break;
                    }
                    else if (i == 1) {
                        count += 2;
                        i=tmp2-1;
                        tmp2 = 9;
                    }
                    else {
                        count ++;
                    }
                }
            }
        }
        d1 /= 10;
        d2 /= 10;
        N--;
    }
    printf("%d", count);

    return 0;
}