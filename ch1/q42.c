/* Program to show call by value */
#include <stdio.h>
int swap(int, int);
int main() {
	int a, b;
	printf("Enter any numbers a and b: ");
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("The values of a and b are %d and %d.\n", a, b);
	return 0;
}

int swap(int p, int q) {
	p = p + q;
	q = p - q;
	p = p - q;
}