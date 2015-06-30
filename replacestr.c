/* Replace space with %20 */
#include <stdio.h>
#include <string.h>
int main() {
	int i, j;
	char c[100] = "chiru and hima are brothers.";
	// printf("%d\n", (int)strlen(c));
	for (i = 0; i < strlen(c); ++i)
	{
		if(c[i] == ' ') {
			for (j = strlen(c) + 1; j > i + 2; --j)
			{
				c[j] = c[j-2];
			}
			c[i] = '%';
			c[i+1] = '2';
			c[i+2] = '0';
		}
	}
	printf("%s\n", c);
	return 0;
}