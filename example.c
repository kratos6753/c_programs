#include <stdio.h>
#include <string.h>
void reverse(char *p)
{
	int i;
	char t[strlen(p)];
	strcpy(t, p);
	for (i = 0; i < strlen(p); ++i)
	{
		p[i] = t[strlen(p)-1-i];
	}
	// printf("%s\n", p);
}

int main() {
	char ch[] = "chiru ", s[strlen(ch)];
	int i;
	s[0] = '\0';
	reverse(ch);
	strcat(s, ch);
	for (i = 0; i < strlen(s); ++i)
	{
		printf("%c\n", s[i]);
	}
	return 0;
}