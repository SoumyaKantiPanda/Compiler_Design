#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

checkVowel(char c)
{
	c = tolower(c);
	if (c == 'a'||c=='e'||c=='i'||c=='o'||c=='u')
		return 0;
	return 1;
}

int main()
{
	int len = 0, j, flag, i;
	char sentence[500];
	FILE *filepointer = fopen ("text.txt", "w");
	printf("Enter the string to be checked for the alternating sequence of vowels and consonents: \n");
	fflush(stdin);
	fgets(sentence,500,stdin);
	fputs(sentence,filepointer);
	fclose(filepointer);

	char ch[10];
	filepointer = fopen("text.txt","r");
	fflush(stdin);
	printf("The words that have alternating sequence of vowels and consonents in the sentence are: \n");

	while (fscanf(filepointer,"%s", ch) == 1)
	{
		len = strlen(ch);
		if (len<5)
			continue;
		j = checkVowel(ch[0]);

		for ( i = j; i < len; i=i+2)
		{
			if (j == 0)
			{
				if ( checkVowel(ch[i]) == 0 && checkVowel(ch[i+1]) == 1)
					flag = 1;
				else
				{
					flag = 0;
					break;
				}
			}
			if ( j == 1)
			{
				if ( checkVowel(ch[i]) == 0 && checkVowel(ch[i-1]) == 1)
					flag = 1;
				else
				{
					flag =0;
					break;
				}
			}

		}
		if (flag == 1)
		{
			printf(" %s \n", ch);
		}
	}
	
	fclose(filepointer);
}

