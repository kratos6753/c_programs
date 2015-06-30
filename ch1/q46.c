/* Palindromes */
#include <stdio.h>
#include <string.h>
int main() {
	char s1[10], s2[10];
	int i;
	printf("Enter any string : ");
	scanf("%s", s1);
	for(i = 0; i < strlen(s1); ++i) {
		s2[i] = s1[strlen(s1)-(i+1)];
	}
	s2[strlen(s1)] = '\0';
	if(strcmp(s1, s2) == 0){
		printf("It's Palindrome\n");
	}else{
		printf("It's not Palindrome\n");
	}
	return 0;
}