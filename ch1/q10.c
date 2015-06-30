/* Program to find greatest in 3 numbers */
#include <stdio.h>
int main() {
	int a, b, c;
	printf("Enter all the numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c)
		printf("Greatest is %d\n", a);
	if(b>c && b>a)
		printf("Greatest is %d\n", b);
	if(c>a && c>b)
		printf("Greatest is %d\n", c);
	return 0;
}