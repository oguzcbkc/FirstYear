#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in the table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    square = 1;
    for (; i <= n; ++i, odd += 2) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}
