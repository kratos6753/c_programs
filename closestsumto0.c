/* Closest two-sum to zero */
#include <stdio.h>
int main() {
	int arr[] = {45, -29, -96, -7, -17, 72, -60}, i, j, num, min = 100, pair[2];
	for (i = 0; i < 7; ++i)
	{
		for (j = 0; j < 7; ++j)
		{
			num = arr[i] + arr[j];
			num = num < 0 ? -num : num; 
			if(num < min)
			{
				min = num;
				pair[0] = arr[i];
				pair[1] = arr[j];
			}
		}
	}
	printf("%d, %d\n", pair[0], pair[1]);
	return 0;
}