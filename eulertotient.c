/* Program to find the count of relatively prime in 1 to n with n */
#include <stdio.h>
int gcd(int a, int b)
{
	if(a == 0)
		return b;
	return gcd(b%a, a);
}

int phi(unsigned int n)
{
	int i;
	unsigned int result = 1;
	for (i = 2; i < n; ++i)
	{
		if(gcd(i, n) == 1)
			result++;
	}
	return result;
}

int main() {
	int num, i;
	printf("Enter any num: ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		printf("phi(%d) = %d\n", i, phi(i));
	}
	return 0;
}
