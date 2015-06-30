/* Counting two's in range from 1 to n (inclusive) */
#include <stdio.h>
int main() {
	int num, temp, count = 0;
	printf("Enter any number : ");
	scanf("%d", &num);
	while(num > 0)
	{
		temp = num;
		while(temp > 0)
		{
			if(temp % 10 == 2)
				count++;
			temp = temp/10;
		}
		num--;
	}
	printf("THe count is %d\n", count);
	return 0;
}