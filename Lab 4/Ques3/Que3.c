#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* substring(char string[], int len);


int main() {
	FILE *filepointer;
	filepointer = fopen("program1.c", "r");
	char word[20];
	int count=0;
	while(fscanf(filepointer, "%s", word) == 1) {
		if(strcmp(substring(word, 3), "if(")==0 || strcmp(substring(word, 4), "if (")==0 ||
		        strcmp(substring(word, 6), "switch(")==0 || strcmp(substring(word, 7), "switch (")==0) {
			printf("The C program has conditional statements/statement.");
			exit(0);
		}
	}
	printf("The C program doesn't have any conditional statement");
}


char* substring(char string[], int len) {
	int c;
	static char subString[10];
	for(c=0;c<len;c++){
		subString[c] = string[c];
	}
	subString[len] = '\0';
	return subString;
}
