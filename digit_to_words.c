/* COnvert digits to words 
ex: 521 five hundred twenty one
	324 three hundred twenty four
	123213,2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *p = "";
char *convert(int num) {
	if(num < 10)
		switch(num) {
			case 1:
				return "one";
				break;
			case 2:
				return "two";
				break;
			case 3:
				return "three";
				break;
			case 4:
				return "four";
				break;
			case 5:
				return "five";
				break;
			case 6:
				return "six";
				break;
			case 7:
				return "seven";
				break;
			case 8:
				return "eight";
				break;
			case 9:
				return "nine";
				break;
		}
	else if(num > 10 && num < 20)
		switch(num) {
			case 11:
				return "eleven";
				break;
			case 12:
				return "twelve";
				break;
			case 13:
				return "thirteen";
				break;
			case 14:
				return "fourteen";
				break;
			case 15:
				return "fifteen";
				break;
			case 16:
				return "sixteen";
				break;
			case 17:
				return "seventeen";
				break;
			case 18:
				return "eighteen";
				break;
			case 19:
				return "nineteen";
				break;
		}
	else if(num >= 20)
		switch(num) {
			case 2:
				return "twenty";
				break;
			case 3:
				return "thirty";
				break;
			case 4:
				return "forty";
				break;
			case 5:
				return "fifty";
				break;
			case 6:
				return "sixty";
				break;
			case 7:
				return "seventy";
				break;
			case 8:
				return "eighty";
				break;
			case 9:
				return "ninety";
				break;
		}
}

char *digits_to_words(int num, int n)
{
	int arr[n], i = n - 1, temp;
	char *h, *t, *th, *l, *ctemp;
	p = (char *)malloc(1000*sizeof(char));
	h = "hundred ";
	t = "ten";
	th = "thousand ";
	l = "lakhs ";
	temp = num;
	while(num > 0)
	{
		arr[i] = num%10;
		num = num/10;
		i--;
	}

	//lets convert
	ctemp = convert((temp/100)%10);
	printf("%s\n", strcat(ctemp, h));
	strcpy(p, strcat(ctemp, strcat(p, h)));
	printf("%s\n", p);
	if((temp/10)%10 != 1) {
		ctemp = convert((temp/10)%10);
		strcpy(p, strcat(p, ctemp));
	} else if((temp/10)%10 == 1 && temp%10 != 0) {
		ctemp = convert(temp%100);
		strcpy(p, strcat(p, ctemp));
	} else if((temp/10)%10 == 1 && temp%10 == 0)
		strcpy(p, t);
	return p;
}

int main() {
	int num, counter = 0, temp;
	printf("Enter any digit: ");
	scanf("%d", &num);
	temp = num;
	while(num > 0)
	{
		num = num/10;
		counter++;
	}
	printf("%s\n", digits_to_words(temp, counter));
	return 0;
}