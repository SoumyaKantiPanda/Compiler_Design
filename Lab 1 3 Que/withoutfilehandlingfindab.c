#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char chararr[100];
	int i=0,j=0;
	int n;
	printf("\nEnter the number of words to be checked: \n");
	scanf("%d",&n);
	
	for(j=0; j<n; j++)
	{

		printf("Enter the string: ");
		fflush(stdin);
		gets(chararr);
		int counta=0,countb=0;
		printf("\n%d\n",strlen(chararr));
		for(i=0; i<strlen(chararr); i++){
			if(chararr[i]=='a')
			{
				counta=1;
				continue;
			}
			
		}
		for(i=0;i<strlen(chararr);i++){
			
			if(chararr[i]=='b')
			{
				countb=1;
				continue;
			}
		}

		if(counta==1&&countb==1)
		{
			printf("\n%s has a and b.\n",chararr);
		}
		else
		{
			printf("\n%s does not has a and b.\n",chararr);
		}
	}
}
