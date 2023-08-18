#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char line[100];
    int null_count = 0;

    fp = fopen("Untitled3.c", "r");

    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while (fgets(line, 100, fp))
    {
        if (strstr(line, "NULL") != NULL)
        {
            null_count++;
        }
    }

    printf("The number of occurrences of the substring 'NULL' in the file is: %d", null_count);

    fclose(fp);

    return 0;
}
