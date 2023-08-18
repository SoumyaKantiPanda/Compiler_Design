/**
WAP to search those words which will start from vowel and
end with z or x or t.
**/
#include<stdio.h>
#include<conio.h>

int main(){
	FILE *filepointer;
	char ch[30];
	int count,i;
	
	filepointer = fopen("myFile.txt","r");
	if(filepointer == NULL){
		printf("The file cannot be openned.");
	}
	else{
		while(fscanf(filepointer,"%s",ch)==1){
			count=0;
			if(ch[0]=='a'||ch[0]=='e'||ch[0]=='i'||ch[0]=='o'||ch[0]=='u'){
				for(i=0;i<30;i++){
					if(ch[i]=='\0'){
						break;
					}
					count++;
				}
				if(ch[count-1]=='z'||ch[count-1]=='x'||ch[count-1]=='t'){
					printf("%s \n",ch);
				}
			}
		}
	}
	
	
	return 0;
}
