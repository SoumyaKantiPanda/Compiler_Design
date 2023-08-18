#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *filepointer;
	char ch[10];
	int i=0;
	int counta=0,countb=0;
	filepointer = fopen("findab.txt","r");
	if(filepointer==NULL) {
		printf("The file cannot be opened.");
	} else {
		while(fscanf(filepointer,"%s",ch)==1) {
			counta=0;
			countb=0;

			for(i=0; i<10; i++) {
				if(ch[i]=='a') {
					counta = 1;
					break;
				}
			}
			for(i=0; i<10; i++) {
				if(ch[i]=='b') {
					countb = 1;
					break;
				}
			}
			if(counta==1&&countb==1) {
				printf("%s \n",&ch);
			}
		}
	}

	return 0;
}
