/* calculate sum of 5 subjects and find percentage */
#include <stdio.h>
int main() {
	int i, max_marks = 100, subjects;
	printf("Enter the no. of subjects : ");
	scanf("%d", &subjects);
	float marks[subjects], sum = 0;
	printf("Enter the marks of the subjects\n");
	for (i = 0; i < subjects; ++i)
	{
		scanf("%f", &marks[i]);
		sum = sum + marks[i];
	}
	printf("The total marks obtained are %f\n", sum);
	printf("THe percentage obtained is %f\n", sum/(subjects*max_marks)*100);
	return 0;
}