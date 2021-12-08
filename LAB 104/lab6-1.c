#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    int count[100] = {0};
    for (int m=0; m<n; m++) {
        for (int x=m+1; x<n; x++) {
            if (nums[m] == nums[x]) {
                count[m]++;
            }
        }
    }

    printf("\n====================================\n");
    for (int z=0; z<n; z++) {
        printf("%d\n", count[z]);
    }

    return 0;
}