/* Using switch case to display arithmetic operators */
#include <stdio.h>
int main() {
	int a, b, op;
	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);
	printf("Enter 1 for sum\n2 for subtract\n3 for multiply\n4 for divide\n===>");
	scanf("%d", &op);
	switch(op) {
		case 1:
			printf("Sum is %d\n", a+b);
			break;
		case 2:
			printf("subtract is %d\n", a-b);
			break;
		case 3:
			printf("multiply is %d\n", a*b);
			break;
		case 4:
			printf("divide is %d\n", a/b);
			break;
		default:
			printf("Just enter the above numbers dumb hacker\n");
	}
	return 0;
}