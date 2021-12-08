#include <stdio.h>
#include <string.h>

int main() {
    int T,i;
    char n[101];

    scanf("%d", &T);

    for(i=1; i<=T; i++){
        scanf("%s", &n);
        int l = strlen(n) - 1;
        int ld = (int) (n[l]);
        if (ld % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}
