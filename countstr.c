/* Count the occurance of word in string */
#include <stdio.h>
#include <string.h>
int main() {
	char str[] = "learn java is best java of all java books", word[] = "java";
	int i, j, k, count = 0;
	for (i = 0; i < strlen(str); ++i)
	{
		if(str[i] == word[0]) {
			for (j = i, k = 0; k < strlen(word); ++j, ++k)
			{
				if(str[j] != word[k])
					continue;
			}
			count++;
		}
	}
	printf("The occurance of word %s in sentence is %d\n", word, count);
	// printf("string length is %d, word length is %d\n", (int)strlen(str), (int)strlen(word));
	return 0;
}