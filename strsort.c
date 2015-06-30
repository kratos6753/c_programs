/* Sorting characters in string in alphabetical order */
#include <stdio.h>
#include <string.h>
char *strinsertionsort(char *s)
{
	int i, j;
	char key;
	for (i = 1; i < strlen(s); ++i)
	{
		key = s[i];
		j = i - 1;
		while(j >= 0 && (int)s[j] > (int)key)
		{
			s[j+1] = s[j];
			j = j - 1;
		}
		s[j+1] = key;
	}
	return s;
}

int main() {
	char str[] = "inspiron";
	strinsertionsort(str);
	printf("The sorted string is %s\n", str);
	return 0;
}