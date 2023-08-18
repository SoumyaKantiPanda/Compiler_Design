#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main() {
	FILE *filepointer;
	int count=0;
	char ch[100];

	filepointer = fopen("program1.c","r");
	if(filepointer == NULL) {
		printf("The program file cannot be openned.");
		exit(0);
	} else {
		while(fscanf(filepointer, "%s", ch)) {
			if(strlen(ch)>1)
				if(ch[0]!='/'&&ch[1]!='/') {
					if((ch[0]=='i'&&ch[1]=='f'&&strlen(ch)==2)||(ch[0]=='i'&&ch[1]=='f'&&ch[2]=='(')) {
						count++;
					} else if(strlen(ch)>=6) {
						if((strcmp("switch",ch)==0)||(ch[0]=='s'&&ch[1]=='w'&&ch[2]=='i'&&ch[3]=='t'&&ch[4]=='c'&&ch[5]=='h'))
							count++;
					}

				}
		}
	}
	if(count>0) {
		printf("Yes the code has conditional statements.");
	}
	return 0;

}
