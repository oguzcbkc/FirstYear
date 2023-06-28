#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float c, multiply = 1.0f;

    while (1) {
        printf("Enter a number (0 to terminate): ");
        scanf("%f", &c);

        if (c <= 0.0f)
            break;
        else {
            multiply *= c;
        }
    }

    printf("The result is %.1f\n", multiply);

    return 0;
}
