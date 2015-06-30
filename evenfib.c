/* even fibonacci numbers: return fibonacci if its even */
#include <stdio.h>
int fib(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int main() {
	int num, i;
	printf("Enter any num: ");
	scanf("%d", &num);
	for (i = 0; i <= num; ++i)
	{
		if(fib(i)% 2 == 0)
			printf("%d ", fib(i));
	}
	printf("\n");
	return 0;
}