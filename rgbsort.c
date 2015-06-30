/* Sort string containing R, G, B in R, G, B order */
#include <stdio.h>
#include <string.h>
// void removeR(char *s, int *l, int i)
// {
// 	char t;
// 	t = s[i];
// 	s[i] = s[*l];
// 	s[*l] = t;
// 	*l++;
// }

void lookup(char *s, char c, int *l)
{
	if(s[*l] == c){
		*l = *l-1;
		lookup(s, c, l);
	}
}

// void removeB(char *s, int *l, int i)
// {
// 	char t;
// 	lookup(s, 'B', l);
// 	t = s[i];
// 	s[i] = s[*l];
// 	s[*l] = t;
// 	*l--;
// 	if(s[i] == 'R')
// 		removeR(s, l, i);
// }

void rgbsort(char *p)
{
	char q[strlen(p)], t;
	strcpy(q, p);
	int i, rc = 0, bc = strlen(p) - 1;
	for (i = 0; i < strlen(p); ++i)
	{
		// printf("bc = %d, i = %d\n",bc, i);
		if(bc == i || bc == i-1)
			break;
		if(q[i] == 'R') {
			t = q[i];
			q[i] = q[rc];
			q[rc] = t;
			rc++;
		}
		// if(q[i] == 'R')
		// 	removeR(q, &rc, i);
		printf("Before: %s ", q);
		if(q[i] == 'B') {
			lookup(q, 'B', &bc);
			t = q[i];
			q[i] = q[bc];
			q[bc] = t;
			bc--;
		}
		// if(q[i] == 'B')
		// 	removeB(q, &bc, i);
		if(q[i] == 'R') {
			t = q[i];
			q[i] = q[rc];
			q[rc] = t;
			rc++;
		}
		printf("After: %s\n", q);
	}
	printf("The sorted string is %s\n", q);
}

int main() {
	char str[] = "GBGRBRG";
	// printf("Initial: %s\n", str);
	rgbsort(str);
	return 0;
}