#include<stdio.h>
#include<conio.h>
#include<string.h>


int main() {
	char arr1[20][100];
	int i,n,count,flag=0;
	char ch[100];
	printf("---Code for finding words starting with vowel and ending with 'z'or'x'or't'---\n");
	for(i=0;i<=77;i++){
		printf("-");
	}
	
	printf("\nEnter the number of words in the list of words: \n");
	scanf("%d",&n);

	printf("\nEnter all the words one by one: \n");
	for(i=0; i<n; i++) {
		scanf("%s",arr1[i]);
	}
	printf("\n\nOutput Part:\nThe words that start with vowel and ends with z or x or t are: \n");
	for(i=0; i<n; i++) {
		count=strlen(arr1[i]);
		
		if(arr1[i][0]=='a'||arr1[i][0]=='e'||arr1[i][0]=='i'||arr1[i][0]=='o'||arr1[i][0]=='u') {
			if(arr1[i][count-1]=='z'||arr1[i][count-1]=='x'||arr1[i][count-1]=='t') {
				printf("%s \n",arr1[i]);
				flag = 1;
			}
		}
	}
	if(flag==0){
		printf("No such words found.");
	}

	return 0;
}
