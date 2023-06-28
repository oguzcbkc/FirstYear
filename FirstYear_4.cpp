#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int m, k1, k2, k3, k4, k5, l1, l2, l3, l4, l5, sum1, sum2, result;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &m, &k1, &k2, &k3, &k4, &k5, &l1, &l2, &l3, &l4, &l5);

    sum1 = m + k2 + k4 + l1 + l3 + l5;
    sum2 = k1 + k3 + k5 + l2 + l4;
    result = sum1 * 3 + sum2;

    printf("\nCheck digit: %d\n", 9 - ((result - 1) % 10));

    return 0;
}
