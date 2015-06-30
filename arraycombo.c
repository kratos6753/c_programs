/* Array Combo */
#include <stdio.h>
int main() {
	int num, i;
	printf("Enter dimensions of arrays: ");
	scanf("%d", &num);
	int arr1[num], arr2[num];
	printf("Enter elements of arr1 : ");
	for (i = 0; i < num; ++i)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter elements of arr2 : ");
	for (i = 0; i < num; ++i)
	{
		scanf("%d", &arr2[i]);
	}
	printf("The combo array is [");
	for (i = 0; i < 2*num; ++i)
	{
		if(i%2==0)
			printf("%d, ", arr1[i/2]);
		else
			printf("%d, ", arr2[i/2]);
	}
	printf("]\n");
	return 0;
}