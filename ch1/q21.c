/* Print fibonocci numbers from 1 to 100 */
#include <stdio.h>
int main() {
	int num, i;
	printf("Enter any number : ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		printf("%d ", fib(i));
	}
	printf("\n");
	return 0;
}

int fib(int n) {
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}