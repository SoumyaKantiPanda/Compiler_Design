/**
WAP to find two words "study" "experience" from existing file.
**/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	FILE *filepointer;
	int i,wordCountS=1,wordCountE=1,countS,countE,flagS=0,flagE=0;
	char ch[20];
	char study[]="study";
	char experience[]="experience";

	filepointer = fopen("myText1.txt","r");
	if(filepointer == NULL) {
		printf("The file cannot be opened.");
	} else {
		while(fscanf(filepointer,"%s",ch)==1) {
			for(i=0; i<strlen(ch); i++) {
				if(ch[i]==study[i]) {
					countS++;
				}
			}
			if(flagS==0)
			if(countS==strlen(study)) {
				printf("The word 'study' is found at word number: %d\n",wordCountS);
				flagS=1;
			}
			for(i=0; i<strlen(ch); i++) {
				if(ch[i]==experience[i]) {
					countE++;
				}
			}
			if(flagE==0)
			if(countE==strlen(experience)) {
				printf("The word 'experiece' is found at word number: %d",wordCountE);
				flagE=1;
			}
			wordCountE++;
			wordCountS++;
		}

	}
}


