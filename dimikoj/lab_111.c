#include <stdio.h>

int main() {

    float vol, r, h;

    printf("Enter Radius: ");
    scanf("%f", &r);
    printf("Enter Height: ");
    scanf("%f", &h);

    vol = (22*r*r*h)/7;

    printf("VOC is %.2f", vol);

    return 0;
}
