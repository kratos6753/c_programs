/* Program to find smallest numbers consisting of only 9s and 0s which is divisible by given number */
#include <stdio.h>
int contains90(int *p)
{
	int q = *p;
	while(q) {
		if(q%10 != 9 && q%10 != 0)
			return 0;
		else
			q = q/10;
	}
	return 1;
}

int main() {
	int num, ans, i = 1;
	printf("Enter any number : ");
	scanf("%d", &num);
	while(1) {
		ans = num * i;
		if(contains90(&ans))
			break;
		i++;
	}
	printf("The smallest number is %d\n", ans);
	return 0;
}