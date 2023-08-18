#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* substring(char string[], int len);

int main() {
	FILE *filepointer;
	filepointer = fopen("program1.c", "r");
	if(filepointer==NULL) {
		printf("The file cannot be openned.");
	} else {
		char word[20];
		int count=0;
		while(fscanf(filepointer, "%s", word) == 1) {
			if(strcmp(substring(word, 3), "do{")==0 || strcmp(substring(word, 4), "do {")==0 ||
			        strcmp(substring(word, 6), "while(")==0 || strcmp(substring(word, 7), "while (")==0 ||
			        strcmp(substring(word, 4), "for(")==0 || strcmp(substring(word, 5), "for (")==0) {
				printf("The program has looping statement");
				exit(0);
			}
		}
		printf("The program doesn't have looping statement");
	}
}

char* substring(char string[], int length) {
	int c = 0;
	static char subString[10];
	while(c < length) {
		subString[c] = string[c];
		c++;
	}
	subString[c] = '\0';
	return subString;
}
