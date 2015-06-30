/* Program to show table of a number using functions. */
#include <stdio.h>
int table(int, int);
int main() {
	int num;
	printf("ENter any number : ");
	scanf("%d", &num);
	table(num, 1);
	return 0;
}

int table(int n, int p) {
	if(p<=10){
		printf("%d x %d = %d\n", n, p, n*p);
		return table(n, ++p);
	}
	else
		return 0;
}