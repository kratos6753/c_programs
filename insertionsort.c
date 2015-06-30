/* Insertion Sort
Algo:
for j = 2 to A.length
	key = A[j]
	// Insert A[j] into sorted sequence A[1..j-1]
	i = j-1
	while i>0 and A[i]>key
		A[i+1] = A[i]
		i = i-1
	A[i+1] = key
*/
#include <stdio.h>
int main() {
	int num, i, j, key;
	printf("Enter the dimensions of the array : ");
	scanf("%d", &num);
	int arr[num];
	printf("Enter the elements of %d dimensional array: ", num);
	for (i = 0; i < num; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < num; ++i)
	{
		key = arr[i];
		j = i - 1;
		while(j>=0 && arr[j]>key) {
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
	printf("THe sorted array is : ");
	for (i = 0; i < num; ++i)
	{
		if(i == num-1)
			printf("%d.", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
	printf("\n");
	return 0;
}