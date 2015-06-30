/* Program to find largest prime factor */
#include <stdio.h>
void insertionsort(int *a, int c)
{
	int i, j, key;
	for (i = 0; i < c; ++i)
	{
		key = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > key)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
	}
}

int main() {
	int num, arr[100], i, count = 0;
	printf("Enter any number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; ++i)
	{
		if(num % i == 0)
			// printf("%d ", i);
			*arr[count++] = i;
	}
	insertionsort(arr, count);
	printf("The largest prime factor is %d\n", count);
	return 0;
}