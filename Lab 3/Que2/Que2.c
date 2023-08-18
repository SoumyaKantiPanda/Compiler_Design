#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *filepointer;
	FILE *filepointer1;
	char chstr[100], ch[30];
	int len, i, line = 0;
	char c;
	// Comment Line
	filepointer = fopen("file1.txt", "r");
	// Comment Line

	if (filepointer == NULL)
	{
		printf("The file cannot be openned.");
	}
	else
	{
		printf("The required output is: \n\n");
		while (fgets(chstr, 100, filepointer) != NULL)
		{
			filepointer1 = fopen("file2.txt", "w");
			line++;
			fputs(chstr, filepointer1);
			fclose(filepointer1);
			filepointer1 = fopen("file2.txt", "r");
			while (fscanf(filepointer1, "%s", ch) == 1)
			{
				len = strlen(ch) - 1;
				if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u')
				{
					if (ch[len] != 'a' && ch[len] != 'e' && ch[len] != 'i' && ch[len] != 'o' && ch[len] != 'u')
					{
						printf("Word: %s \t Line: %d \n\n", ch, line);
					}
				}
			}
		}
	}
	return 0;
}
