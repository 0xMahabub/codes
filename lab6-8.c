#include <stdio.h>
int main() {
    int r, c;
    printf("Input rows & cols: ");
    scanf("%d %d", &r, &c);
    int arr[r][c], tarr[c][r];
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("\nEnter matrix value for M[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int k=0; k<r; k++) {
        for(int l=0; l<c; l++) {
            printf("%d\t", arr[k][l]);
            tarr[l][k] = arr[k][l];
        }
        printf("\n");
    }
    printf("\n========= Transpose Matrix ==========\n");
    for (int p=0; p<c; p++) {
        for (int q=0; q<r; q++) {
            printf("%d\t", tarr[p][q]);
        }
        printf("\n");
    }
    return 0;
}