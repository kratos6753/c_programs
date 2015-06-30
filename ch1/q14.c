/* Program to shift inputed data by two bits to the left */
#include <stdio.h>
int main() {
	int x, y;
	printf("Enter the number: ");
	scanf("%d", &x);
	x <<= 2;
	y = x;
	printf("%d\n", y);
	return 0;
}