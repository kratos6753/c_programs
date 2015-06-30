/* Program to show call by reference swapping of numbers */
#include <stdio.h>
int swap(int *, int *);
int main() {
	int a, b;
	printf("Enter any two numbers a and b: ");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("The value of a and b are %d and %d.\n", a, b);
	return 0;
}

int swap(int *p, int *q) {
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;
}