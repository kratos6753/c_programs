#include <stdio.h>
int main() {
	static int x;
	printf("%d\n", x);
	if(x)
		printf("chiru\n");
	else
		printf("hima\n");
}