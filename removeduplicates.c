/* Removes duplicate letters from string. 
MEMMOVE function: memmove(address of char to remove, address of next char, length of string - index of removed char)
*/
#include <stdio.h>
#include <string.h>
int main() {
	char str[100] = "bananas", key;
	int i, j;
	for (i = 0;; ++i)
	{
		if(i >= strlen(str))
			break;
		key = str[i];
		for (j = i + 1;; ++j)
		{
			if(j >= strlen(str))
			break;
			if(str[j] == str[i])
				memmove(&str[j], &str[j+1], strlen(str) - j);
		}
	}
	printf("%s\n", str);
	return 0;
}
/*
using removeChar function
void removeChar(char *str, char garbage) {
	char *src, *dst;
	for(src = dst = str; *src != '\0'; src++) {
		*dst = *src;
		if(*dst != garbage) dst++;
	}
	*dst = '\0';
}

int main(void) {
	char *str = malloc(strlen("abcdef") + 1);
	strcpy(str, "abcdef");
	removeChar(str, "b");
	printf("%s", str);
	free(str);
	return 0;
}

result:
>>acdef
*/