/* Program to use bitwise AND operator between the two integers. */
#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("Enter any two numbers a and b : ");
	scanf("%d %d", &a, &b);
	c = a & b;
	d = a | b;
	printf("The values of c and d is %d and %d\n", c, d);
	return 0;
}