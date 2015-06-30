/* Number Of Occurrences Of Vowels, Consonants, Words, Spaces And Special Characters In The Given Statement */
#include <stdio.h>
#include <string.h>
int main() {
	char str[30];
	int i, vowel_count = 0, consonant_count = 0, sc_count = 0;
	printf("Enter any string : ");
	scanf("%s", str);
	// strlwr(str);
	for (i = 0; i < strlen(str); ++i)
	{
		if(!(((int)str[i] >= 48 && (int)str[i] <= 57) || ((int)str[i] >= 97 && (int)str[i] <= 122)))
			sc_count++;
		else if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			vowel_count++;
		else
			consonant_count++;
	}
	printf("Vowel count is %d\nConsonant count is %d\nSpecial character count is %d\n", vowel_count, consonant_count, sc_count);
	return 0;
}
/* The program is incomplete. */