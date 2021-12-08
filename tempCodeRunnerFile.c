#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    int count = 0;

    for (int x=0; x<n; x++) {
        for (int y=x+1; y<n; y++) {
            if (nums[y] == nums[x]) {
                count++;
                break;
            }
        }
    }
    printf("Duplicates found: %d", count);
    return 0;
}