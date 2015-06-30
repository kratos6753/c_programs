/* Reading and Writing from a file */
#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *fp;
	char ch;
	fp = fopen("test", "r");
	if(fp == NULL){
		printf("Cannot open this file.\n");
		exit(1);
	}
	while(ch != EOF) {
		ch = fgetc(fp);
		printf("%c", ch);
	}
	printf("\n");
	fclose(fp);
	return 0;
}