#include <stdio.h>


int main() {
	FILE *filepointer;
	filepointer = fopen("fileName.txt","w");
	char addedText[100] ="This is the text added to the file.";

	if(filepointer==NULL) {
		printf("The file couldnt be loaded.");
	} else {
		fputs(addedText,filepointer);
		fclose(filepointer);
		printf("Successfully written.");
	}



	return 0;
}
