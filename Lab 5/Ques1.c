#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int isSymbol(char ch)
{
	if(isalpha(ch)==0&&isdigit(ch)==0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int len,flag,i,count;
	FILE *filepointer;
	char word[30];
	filepointer = fopen("Text.txt","r");
	if(filepointer==NULL)
	{
		printf("The file cannot be openned.");
	}
	else
	{
		while(fscanf(filepointer,"%s",word)==1)
		{
			flag=0;
			count=0;
			len = strlen(word);
			for(i=0; i<len; i++)
			{
				if(isalpha(word[i])==1)
				{
					flag=1;
				}
				else
				{
					flag=0;
				}
				if(flag=1&&isdigit(word[i])==1)
				{
					flag=2;
				}
				if(isSymbol(word[i])==1)
				{
					count=1;
				}
			}
			if(flag==2&&count==0)
			{
				printf("%s\n",word);
			}
		}

	}
	return 0;
}
