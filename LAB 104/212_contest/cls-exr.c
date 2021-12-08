#include <stdio.h>

int main()
{
    int n, d;
    int ar[10]  = {0};

    scanf("%d", &n);

    while( n>0)
    {
        d = n % 10;
        ar[d]++;

        n = n / 10;
    }


    for(int i = 0; i<10; i++)
    {
        if(ar[i]>1){
            printf("%d\t", i);
        }
    }

    printf("\n");

    return 0;
}