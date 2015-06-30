/* Program to find the entered year is leap year */
#include <stdio.h>
int main() {
	int year;
	printf("Enter any year : ");
	scanf("%d", &year);
	if(year%4 != 0)
		printf("This is not leap year\n");
	else
		printf("This is leap year\n");
	return 0;
}