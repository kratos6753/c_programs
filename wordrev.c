/* Reverse a string preserving words */
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

void reverse_by_word(char *s)
{
	int i, count = 0;
	char q[strlen(s)], t[strlen(s)];
	for (i = 0; i < strlen(s); ++i)
	{
		if(s[strlen(s)-1-i] == ' ') {
			// printf("before reversing: %s\n", t);
			reverse(t);
			// printf("after reversing: %s\n", t);
			t[count] = s[strlen(s)-1-i];
			strcat(q, t);
			t[0] = '\0';
			printf("q is %s\n", q);
			count = 0;
			// q[i] = s[strlen(s)-1-i];
		}else {
			t[count] = s[strlen(s)-1-i];
			printf("%s\n", t);
			count++;
		}
	}
	printf("Reversed string is '%s'\n", q);
}

int main() {
	char str[] = "chiru hima";
	reverse_by_word(str);
	// printf("Reversed string is '%s'\n", str);
	return 0;
}