#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	int n,i,j,counta=0,counti=0,T;
	char arr1[20][100];
	printf("Enter the number of words in the list: \n");
	scanf("%d",&n);
	printf("\nEnter the words one by one: \n");
	fflush(stdin);
	for(i=0; i<n; i++) {
		scanf("%s",arr1[i]);
	}
	printf("\nWords that have 'a' and 'i' are: \n");
	for(i=0; i<n; i++) {
		counta=0;
		counti=0;
		for(j=0; j<strlen(arr1[i]); j++) {
			if(arr1[i][j]=='a') {
				counta=1;
			}
			if(arr1[i][j]=='i') {
				counti=1;
			}
		}
		if(counta==1&&counti==1) {
			printf("%s\n",arr1[i]);
		}
	}
}

