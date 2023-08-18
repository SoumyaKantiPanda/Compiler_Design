#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i, j, n, len, count; 
	char words[100][100];
	
	printf("Enter the number of words that you want to enter: \n");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter the words one by one: \n");
	for(i=0;i<n;i++){
		scanf("%s",words[i]);
	}
	printf("\nThe words that have more than one number: \n");
	for(i=0;i<n;i++){
		count = 0;
		len = strlen(words[i]);
		for(j=0;j<len;j++){
			if(words[i][j]>=48&&words[i][j]<=57){
				count++;
			}
		}
		if(count>1){
			printf("%s \n",words[i]);
		}
	}
	return 0;
}
