/* How to find simple interest */
#include <stdio.h>
int main() {
	int p, t;
	float si, r;
	printf("Please enter principle, timeperiod and rate : ");
	scanf("%d %d %f", &p ,&t, &r);
	si = p*t*r/100;
	printf("Simple interest is %f\n", si);
	return 0;
}