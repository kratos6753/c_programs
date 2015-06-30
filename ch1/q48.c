/* Merging one dimensional arrays excluding common elements */
#include <stdio.h>
#include <stdbool.h>
bool isexist(int, int [], int);
int main() {
	int num1, num2, count;
	printf("Enter the dimensions of arrays A and B : ");
	scanf("%d %d", &num1, &num2);
	int a[num1], b[num2], c[num1+num2], i, j;
	printf("Enter the elements of array A (max %d elements): ", num1);
	for (i = 0; i < num1; ++i)
	{
		scanf("%d", &a[i]);
		c[i] = a[i];
	}
	printf("Enter the elements of array B (max %d elements): ", num2);
	for (i = 0; i < num2; ++i)
	{
		scanf("%d", &b[i]);
	}
	/* merging algorithm */
	count = num1;
	for(i = 0; i < num2; ++i)
	{
		if(!isexist(b[i],a, num2)){
			c[count] = b[i];
			count++;
		}
	}
	for(i = 0; i < count; ++i)
	{
		printf("%d ", c[i]);
	}
	printf("\n");
	return 0;
}

bool isexist(int a, int b[], int length) {
	int i;
	for(i = 0; i < length; ++i)
	{
		if(b[i] == a)
			return true;
	}
	return false;
}