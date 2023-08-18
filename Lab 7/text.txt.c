//WAP using file handling to count NULL value as well as comment lines.

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	int count=0, choice;
	char ch[30];
	FILE *filepointer = fopen("VowelConsonent.c","r");
	while(fscanf(filepointer, "%s", ch))
	{
		if(n = NULL )
		filepointer1 = fopen("secondfile.c","w")
		fputs(ch,filepointer1);

		if(strlen(ch)>=2)
			if((ch[0]=='/'&&ch[1]=='/')||(ch[0]=='/'&&ch[1]=='*'&&ch[2]=='*'))
			{
				count++;
			}
	}
	printf("The number of comment lines are: %d",count);
}
