#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i * i <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}
