#include <stdio.h>
#include <string.h>

int main() {
    int N, l, a=0, b=0, c=0;
    char *inputStr;
    scanf("%d", &N);

    while (N--) {
        scanf("%s", &inputStr);
        l = strlen(inputStr);
        for (int i=0; i<l; i++) {
            if (inputStr[i] == 'A') {
                a++;
            }
            else if (inputStr[i] == 'B') {
                b++;
            }
            else {
                c++;
            }
        }
        if ((a+c) == b) {
            printf("YES\n");
        }
        else {
            printf("No\n");
        }
        // strncpy(inputStr, "");
    }

    return 0;
}