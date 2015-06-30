/* Finding pairs in array whose sum is desired value */
#include <stdio.h>
int main() {
	int num, dim, i, j;
	printf("Enter the dimensions of array and desired value: ");
	scanf("%d %d", &dim, &num);
	int arr[dim];
	for (i = 0; i < dim; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < dim; ++i)
	{
		for (j = 0; j < dim; ++j)
		{
			if(arr[i] + arr[j] == num && i <= j)
				printf("%d, %d\n", arr[i], arr[j]);
		}
	}
	return 0;
}