/* Max number formed from an array 
eg: [2, 34, 1, 4, 5] ---> [2, 3, 1, 4, 5] --> [1, 2, 3, 4, 5]
543421
*/
#include <stdio.h>
int sort(int *a, int *b, int n)
{
	int i, j, key1, key2;
	for (i = 1; i < n; ++i)
	{
		 key1 = a[i];
		key2 = b[i];
		j = i - 1;
		while(j >= 0 && b[j] > key2)
		{
			a[j+1] = a[j];
			b[j+1] = b[j];
			j = j - 1;
		}
		a[j+1] = key1;
		b[j+1] = key2;
	}
}

int getfirst(int n)
{
	while(n > 0)
	{
		if(n == n % 10)
			return n;
		else
			n = n/10;
	}
}

int maxNum(int a[], int n)
{
	int i, b[n], max = 0, factor;
	for (i = 0; i < n; ++i)
	{
		b[i] = getfirst(a[i]);
	}
	sort(a, b, n);
	for (i = n-1; i >= 0; --i)
	{
		if(a[i] >= 100)
			factor = 1000;
		else if(a[i] >= 10)
			factor = 100;
		else
			factor = 10;
		max = max*factor + a[i];
	}
	printf("Max number is %d\n", max);
	return 0;
}

int main() {
	int arr[] = {2, 73, 51, 85, 1, 0}, num = 6;
	maxNum(arr, num);
	return 0;
}