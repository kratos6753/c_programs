/* swap of two numbers with out third variable */
#include <stdio.h>
int main() {
	int a, b;
	printf("Enter two variables: ");
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping\nThe values of a and b are %d and %d\n", a, b);
	return 0;
}