#include<stdio.h>
#include<string.h>

int main(){
    int i,n,j,count,k,len;
    char lines[100][100],ch[100][100];
    printf("Enter the number of lines to be entered: \n");
    scanf("%d",&n);
    
    printf("Enter the lines one by one : \n");
    for(i=0;i<n;i++){
        fflush(stdin);
        scanf("%[^\n]s",lines[i]);
    }
    printf("Found such words in lines: \n");
    for(i=0;i<n;i++){
        count=i;
        k=0;
        for(j=0;j<strlen(lines[i]);j++){
            if(lines[i][j]==' '){
                ch[count][k] = lines[i][j];
                count++;
                printf("%d \n",i+1);
            }
        }
        for(j=0;j<count;j++){
            len=strlen(ch[j])-1;
            if(ch[j][0]=='a'||ch[j][0]=='e'||ch[j][0]=='i'||ch[j][0]=='o'||ch[j][0]=='u'){
                if(ch[j][len]!='a'&&ch[j][len]!='e'&&ch[j][len]!='i'&&ch[j][len]!='o'&&ch[j][len]!='u'){
                    printf("\nWord: %s",ch[j]);
                }
            }
        }
    }
}