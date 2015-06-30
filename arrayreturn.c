/* Returning an array */
#include <stdio.h>
int *arrayreturn(void );
int main() {
	int array[2];
	array = arrayreturn();
	printf("array[0] = %d, array[1] = %d\n", array[0], array[1]);
	return 0;
}

int *arrayreturn(void ) {
	return [1,2];
}