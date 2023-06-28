#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int q1, q2;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &q1, &q2);
    printf("The reversal is: %d%d\n", q2, q1);
    return 0;
}
