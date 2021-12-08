#include<stdio.h>

int main() {
    for(int i=1000; i>0; i--){
        printf("%d\t", i);
        i = i - 1;

        printf("%d\t", i);
        i = i - 1;

        printf("%d\t", i);
        i = i - 1;

        printf("%d\t", i);
        i = i - 1;

        printf("%d\n", i);
        i = i - 1;
    }

    return 0;
}

