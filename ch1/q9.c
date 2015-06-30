/* Program to print a table */
#include <stdio.h>
int main() {
	int table, i;
	printf("ENter the table you want to print: ");
	scanf("%d", &table);
	for (i = 1; i <= 10; ++i)
	{
		printf("%d x %d = %d\n", table, i, table*i);
	}
	return 0;
}