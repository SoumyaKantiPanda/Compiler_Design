#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	int n,i,j,counta=0,counti=0,T;
	char arr1[20];
	printf("---Program to check if the word contains a and i--- \n");
	printf("State the number of words to be checked: ");
	scanf("%d",&T);

	for(j=0; j<T; j++) {
		printf("\nEnter the word %d to be checked: \n",j+1);
		fflush(stdin);
		gets(arr1);
		counta=0;
		counti=0;
		for(i=0; i<20; i++) {
			if(arr1[i]=='a') {
				counta=1;
			}
			if(arr1[i]=='i') {
				counti=1;
			}
		}
		if(counta==1&&counti==1) {
			printf("Yes the word has a and i.\n");
			printf("The word is: %s",arr1);
		} else {
			printf("The word doesn't contain a or b.");
		}
	}
	return 0;

}
