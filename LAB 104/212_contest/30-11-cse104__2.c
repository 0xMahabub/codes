#include <stdio.h>

int main() {
    int marks[3][5], sum;
    for (int i=0; i<3; i++) {
        for(int j=0; j<5; j++) {
            printf("marks[%d][%d] = ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int x=0; x<3; x++) {
        sum = 0;
        for (int y=0; y<5; y++) {
            sum += marks[x][y];
        }
        printf("Avg marks of %d = %.2f\n", x, (float)(sum/5.0));
    }

    return 0;
}