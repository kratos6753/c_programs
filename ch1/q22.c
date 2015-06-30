/* Program to find factorial of number */
#include <stdio.h>
int main() {
	int num, factorial = 1, i;
	printf("Enter any number : ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		factorial = factorial*i;
	}
	printf("The factorial is %d\n", factorial);
	return 0;
}