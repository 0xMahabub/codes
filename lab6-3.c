#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    int max = nums[0], min = nums[0];
    for (int m=1; m<n; m++) {
        if (nums[m] > max)
            max = nums[m];
        else if (nums[m] == max)
            continue;
        
        if (nums[m] < min)
            min = nums[m];
        else if (nums[m] == min)
            continue;
    }

    printf("Max = %d and Min = %d", max, min);

    return 0;
}