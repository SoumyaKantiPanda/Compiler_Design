#include <stdio.h>
#include <stdlib.h>


void findLocWord(char word[]){
	FILE *filepointer;
	char str[200];
    char ch;
    int i=0,j=0,pos=0,cmp,flag=0;
    filepointer=fopen("myText1.txt","r");
    while((ch=fgetc(filepointer))!=EOF)
    {
        if((ch==' ')||(ch=='\n'))
        {
           pos++;
           cmp=strcmp(str,word);
           if(cmp==0)
           {
               printf("%s is found at the position %d from the beginning\n",word,pos);
               flag=1;
           }
           for(i=j;i>=0;i--)
           {
               str[i]='\0';
           }
           j=0;
           continue;
        }
        str[j]=ch;
        j++;
    }
    pos++;
    cmp=strcmp(str,word);
    if(cmp==0)
    {
        printf("%s is found at %d position from the beginning\n",word,pos);
    }
    else if(flag==0)
    {
        printf("%s is not found in this file",word);
    }
}

int main()
{
    findLocWord("study");
    findLocWord("experience");
    
    return 0;
}
