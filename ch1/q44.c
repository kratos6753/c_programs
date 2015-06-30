/* Program to find largest of two numbers using functions */
#include <stdio.h>
int greatest(int, int);
int main() {
	int a, b;
	printf("Enter any two numbers a and b : ");
	scanf("%d %d", &a, &b);
	printf("Greatest number is %d\n", greatest(a, b));
	return 0;
}

int greatest(int a, int b) {
	return a>b?a:b;
}