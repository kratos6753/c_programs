/* Program to display sum of series 1+1/2+1/3+..........+1/n */
#include <stdio.h>
int main() {
	int num, i;
	float sum = 0;
	printf("Enter any number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		sum = sum + 1.0/i;
	}
	printf("The sum is %f\n", sum);
	return 0;
}