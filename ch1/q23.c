/* Program to check whether number is prime or not */
#include <stdio.h>
int main() {
	int num, i;
	printf("Enter any number: ");
	scanf("%d", &num);
	for (i = 2; i < num; ++i)
	{
		if(num%i==0){
			printf("It is not prime\n");
			return 0;
		}
	}
	printf("It is prime\n");
	return 0;
}