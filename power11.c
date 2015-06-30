/* Problem to print pattern of power 11
		1
	1	2	1
1	2	3	2	1
	1	2	1
		1
*/
#include <stdio.h>
int main() {
	int num, i, j, k, l;
	printf("Enter any num: ");
	scanf("%d", &num);
	for (i = 0; i < 2*num-1; ++i)
	{
		for (j = i >= num ? (2*num-2-i) : i; j < num-1; ++j)
		{
			printf("  ");
		}
		l = (num <= i) ? (2*(2*num-1-i)-1) : (2*i+1);
		for (k = 0; k < l; ++k)
		{
			printf("%d ", (k > l/2) ? (l-k) : (k+1));
		}
		printf("\n");
	}
}