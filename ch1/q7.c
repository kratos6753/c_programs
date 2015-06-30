/* Program to reverse a given number */
#include <stdio.h>
int main() {
	int num, reverse = 0;
	printf("Enter the number : ");
	scanf("%d", &num);
	while(num > 0) {
		reverse = reverse*10 + (num%10);
		num = num/10;
	}
	printf("The reversed number is %d\n", reverse);
	return 0;
}