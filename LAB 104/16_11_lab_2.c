#include <stdio.h>
// take N numbers in an array and find how many of them even or odd

int main() {

    int ev=0, od=0, N;

    printf("input N = ");
    scanf("%d", &N);

    int numbers[N];
    for(int i=0; i<N; i++) {
        printf("Input number[%d] = ", i);
        scanf("%d", &numbers[i]);

        // check
        if (numbers[i] % 2 == 0)
            ev++;
        else
            od++;
    }

    printf("\nEven=%d and Odd=%d", ev, od);

    return 0;
}
