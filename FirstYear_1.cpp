#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159f
#define fraction 4.0f/3.0f 

int main() {

    float radius = 10, volume;
    volume = ((4.0f / 3.0f) * PI) * radius * radius * radius;
    printf("Volume(cubic meters)= %.1f \n", volume);

    int r;
    printf("enter of sphere radius: ");
    scanf_s("%d", &r)
    printf("Volume(cubic meters)=%.1f\n", ((4.0f / 3.0f) * PI) * r * r * r);

    printf("Volume(cubic meters)=%.1f \n", (fraction * PI) * radius * radius * radius);

    return 0;
}