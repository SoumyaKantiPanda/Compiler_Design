#Question1: WAP using file handling to identify whether given identifier is valid or not.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *filepointer;
	int flag,i;
	char ch[100];
	filepointer = fopen("text1.txt","r");
	
	if(filepointer == NULL){
		printf("The file cannot be openned.");
	}
	else{
			if(isalpha(ch[0]))
			{
				flag = 1;
			}
			else
			{
				printf("\n Word %s is not a valid identifier.",ch);
			}
			i=1;
			while(ch[i]!='\0'){
				if(!isdigit(ch[i])&&!isalpha(ch[i])&&!ch[i]=='_'){
					flag=0;
					break;
				}
				i++;
			}
			while(fscanf())
			
			if(flag==1&&count=1){
				printf("\n Word %s is a valid identifier.",ch);
			}
	}
	
	return 0;
}
