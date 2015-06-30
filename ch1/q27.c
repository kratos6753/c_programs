/* Program to add two number using pointers */
#include <stdio.h>
int main() {
	int a = 1, b = 2, *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("Sum using pointers : %d\n", *p1 + *p2);
	return 0;
}