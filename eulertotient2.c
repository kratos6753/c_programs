/* Euler Totient implementation using euler's product formula */
#include <stdio.h>
int phi(int n)
{
	float result = n;
	int p;
	
	for (p = 2; p*p <= n; ++p)
		if (n % p == 0)
		{
			while(n % p == 0)
				n /= p;
			result *= (1 - (1 / (float) p));
		}

	if(n > 1)
		result *= (1 - (1 / (float) n));
	return (int) result;
}

int main() {
	int n;
	for (n = 1; n <= 10; ++n)
	{
		printf("phi(%d) = %d\n", n, phi(n));
	}
	return 0;
}