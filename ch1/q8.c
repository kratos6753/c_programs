/* Program to find gross salary */
#include <stdio.h>
int main() {
	int gs, bs, da, ta;
	printf("Enter the basic salary : ");
	scanf("%d", &bs);
	da = 10*bs/100;
	ta = 12*bs/100;
	gs = bs + da + ta;
	printf("The gross salary is %d\n", gs);
	return 0;
}