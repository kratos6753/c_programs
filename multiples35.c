/* Multiples of 3 and 5 */
#include <stdio.h>
int main() {
	int num, i;
	printf("Enter any num: ");
	scanf("%d", &num);
	for (i = 0; i <= num; i+=5)
	{
		if(i%3 == 0 && i != 0)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}