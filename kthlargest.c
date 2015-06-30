/* Kth largest integer from an array 
Algo: insertion sort
*/
#include <stdio.h>
int kthlargest(int [], int , int );

int main()
{
	int num, k, i;
	printf("ENter k and dimensions of array: ");
	scanf("%d %d", &k, &num);
	int arr[num];
	printf("Enter the elements of array: ");
	for (i = 0; i < num; ++i)
	{
		scanf("%d", &arr[i]);
	}
	printf("The %dth largest integer from an array is %d\n", k, kthlargest(arr, num, k));
	return 0;
}

int kthlargest(int a[], int n, int b)
{
	int i, j, key;
	for(i = 1; i < n; ++i) {
		key = a[i];
		j = i - 1;
		while(j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
	return a[n - b];
}