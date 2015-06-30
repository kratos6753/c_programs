/* Listing all prime factors */
#include <stdio.h>
#include <math.h>
void primefactors(int n)
{
	int i;
	while(n%2 == 0)
	{
		printf("%d ", 2);
		n = n/2;
	}

	for (i = 3; i < sqrt(n); i+=2)
	{
		while(n%i == 0)
		{
			printf("%d ", i);
			n = n/i;
		}
	}

	if(n > 2)
		printf("%d\n", n);
}

int main() {
	int n = 315;
	primefactors(n);
	return 0;
}