/* Determining if two strings are rotations of each other */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isRotation(char *, char *);

int main() {
	char p[100], q[100];
	printf("Enter two strings:\n");
	fgets(p, 100, stdin);
	p[strlen(p)-1] = '\0';
	fgets(q, 100, stdin);
	q[strlen(q)-1] = '\0';
	isRotation(p, q) ? printf("Rotation is true\n") : printf("Rotation is false\n");
	return 0;
}

int isRotation(char *p, char *q)
{
	int i, j;
	char key;
	for (i = 0; i < strlen(q); ++i)
	{
		key = q[0];
		for (j = 0; j < strlen(q)-1; ++j)
		{
			q[j] = q[j+1];
		}
		q[j] = key;
		if(strcmp(p, q) == 0) {
			return 1;
		}
	}
	return 0;
}