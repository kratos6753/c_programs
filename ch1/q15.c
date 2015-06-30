/* Program to use switch statement */
#include <stdio.h>
int main() {
	char ch;
	printf("Enter the day of week: ");
	scanf("%c", &ch);
	switch(ch) {
		case 'm':
		case 'M':
			printf("Monday\n");
			break;
		case 't':
		case 'T':
			printf("Tuesday\n");
			break;
		case 'w':
		case 'W':
			printf("Wednessday\n");
			break;
		case 'h':
		case 'H':
			printf("Thursday\n");
			break;
		case 'f':
		case 'F':
			printf("Friday\n");
			break;
		case 's':
		case 'S':
			printf("Saturday\n");
			break;
		case 'u':
		case 'U':
			printf("Sunday\n");
			break;
		default:
			printf("I love Sundays\n");
	}
	return 0;
}