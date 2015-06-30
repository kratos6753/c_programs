/* HOw to find area and circumference of circle */
#include <stdio.h>
int main() {
	float area, circumference, radius;
	printf("ENter the radius of circle\n");
	scanf("%f", &radius);
	area = 3.14*radius*radius;
	circumference = 2*3.14*radius;
	printf("Area and circumference of circle are %f and %f\n", area, circumference);
	return 0;
}