#include<stdio.h>
#include<stdlib.h>

int main(){
	int count,choice;
	char chr;
	
	FILE *filepointer;
	printf("Do you want to read from text file or program file:\n1. Text File\n2. Program File \n");
	scanf("%d",&choice);
	
	if(choice == 1){
		filepointer = fopen("file2.txt","r");
	}
	else{
		filepointer = fopen("Que2.c","r");
	}
	
	
	while((chr = fgetc(filepointer)) != EOF){
		if(chr =='/' ){
			if((chr=fgetc(filepointer))=='/'){
				count++;
			}
		}
	}
	printf("Number of comment lines: %d",count);
}
