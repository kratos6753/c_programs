/* TO find factorial of number using recursion */
#include <stdio.h>
int fact(int);
int main() {
	int num;
	printf("Enter any number : ");
	scanf("%d", &num);
	printf("Factorial of %d is %d\n", num, fact(num));
	return 0;
}
int fact(int n) {
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}