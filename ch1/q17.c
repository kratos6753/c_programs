/* Program to display 10 natural numbers and their sum */
#include <stdio.h>
int main() {
	int num, i, sum = 0;
	printf("ENter the no. of natural numbers to display: ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		printf("%d ", i);
		sum = sum + i;
	}
	printf("\nSum is %d\n", sum);
	return 0;
}