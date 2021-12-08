#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    int odd[100] = {0}, even[100] = {0}, od=0, ev=0;
    for (int a=0; a<n; a++) {
        if (nums[a]%2 == 0){
            even[ev] = nums[a];
            ev++;
        }
        else if (nums[a]%2 == 1){
            odd[od] = nums[a];
            od++;
        }
    }

    printf("==== Odd [] ====>\n");
    for (int o=0; o<od; o++) {
        printf("%d\n", odd[o]);
    }
    printf("==== Even [] ====>\n");
    for (int e=0; e<ev; e++) {
        printf("%d\n", even[e]);
    }
    return 0;
}