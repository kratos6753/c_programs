/* Program to print star sequence */
#include <stdio.h>
int main() {
	int num, i, j, k;
	printf("Enter any num: ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		for (j = 1; j <= num-i; ++j)
		{
			printf(" ");
		}
		for (k = 1; k <= 2*i-1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}