#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *filepointer;
	filepointer = fopen("fileName","w");
	char arr[] = "This is the string that is to be added to the File.";
	if(filepointer == NULL){
		printf("The file cannot be opened.");
	}
	else{
		fputs(arr, filepointer);
		fclose(filepointer);
		printf("Successfully Edited the File!");
	}
	
	return 0;	
}
