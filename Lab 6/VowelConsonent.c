#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
	FILE *f = fopen ("text.txt", "r");
	char ch[10];
	while (fscanf(f,"%s", ch) == 1)
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
			//ahfajfkjafk47
			/**afhakh**/
			//fjaslflafnhllfan
		}
		if (flag == 1)
		{
			printf(" %s ", ch);
		}
	}
}

