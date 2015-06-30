/* Program to display series and find sum of 1+3+5+........+n */
#include <stdio.h>
int main() {
	int num, i, sum = 0;
	printf("Enter any number : ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		printf("%d ", 2*i-1);
		sum = sum + (2*i-1);
	}
	printf("\nThe sum is %d\n", sum);
	return 0;
}