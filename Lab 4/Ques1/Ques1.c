//WAP using file handling to identify whether given identifier is valid or not.

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main() {
	FILE *filepointer;
	int flag,i=1,count;
	char ch[100],chs[100];
	filepointer = fopen("text1.txt","r");
	if(filepointer == NULL) {
		printf("The file cannot be openned.");
	} else {
		printf("Enter your identifier: ");
		scanf("%s",ch);

		if(isalpha(ch[0])||ch[0]=='_') {
			flag=1;
		} else {
			printf("\n %s is not a valid identifier.",ch);
			exit(0);
		}
		while(ch[i]!='\0') {
			if(!isdigit(ch[i])&&!isalpha(ch[i])&&ch[i]!='_'){
				flag=0;
				break;
			}
			i++;
		}
		count = 0;
		while(fscanf(filepointer,"%s",chs)==1) {
			if(strcmp(ch,chs)==0) {
				count = 1;
				break;
			}
		}
		if(flag==1&&count!=1) {
			printf("\n %s is a valid identifier. ",ch);
		} else {
			printf("\n %s is not a valid identifier. ",ch);
		}
	}
	return 0;
}

