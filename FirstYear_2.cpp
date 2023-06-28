#include <stdio.h>

int main(void) {
	int num1, denom1, num2, denom2, result1, result2;

	printf("Enter two fractions separated by a plus sign: ");
	scanf_s("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	result1 = (num1 * denom2) + (num2 * denom1);
	result2 = denom1 * denom2;

	printf("The sum is %d/%d\n", result1, result2);

	return 0;

}