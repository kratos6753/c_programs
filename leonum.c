/* Leonardo numbers 
L0 = 1, L1 = 1, Ln = Ln-2 + Ln-1 + 1
*/
#include <stdio.h>
int leonum(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return leonum(n-2) + leonum(n-1) + 1;
}

int main() {
	int num, i;
	printf("Enter any num: ");
	scanf("%d", &num);
	for (i = 0; i < num; ++i)
	{
		printf("%d ", leonum(i));
	}
	printf("\n");
	return 0;
}