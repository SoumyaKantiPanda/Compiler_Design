#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	FILE *filepointer = fopen("Untitled3.c","r");
	char ch[30];
	int count=0;
	while(fscanf(filepointer, "%s", ch)==1){
		if(strcmp(ch,"NULL")==0){
			count++;
		}
	}
	printf("The number of Null values are: %d",count);
	
	return 0;
}
