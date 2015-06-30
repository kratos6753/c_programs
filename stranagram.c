/* Checking string whether it is anagrams or not */
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
	char str1[] = "army", str2[] = "mary";
	if(strlen(str1) == strlen(str2) && strcmp(strinsertionsort(str1), strinsertionsort(str2)) == 0)
		printf("Both strings are anagrams\n");
	else
		printf("Both strings are not anagrams\n");
	return 0;
}