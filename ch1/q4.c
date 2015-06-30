/* How to convert temperature from centigrade to fahrenheit */
#include <stdio.h>
int main() {
	float centigrade, fahrenheit;
	printf("Enter the temperature in centigrade : ");
	scanf("%f", &centigrade);
	fahrenheit = 32 + 9*centigrade/5;
	printf("The temperature in fahrenheit is %f\n", fahrenheit);
	return 0;
}