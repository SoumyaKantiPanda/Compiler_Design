#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *filepointer;
    int count,i,len;
    char ch[30];
    filepointer = fopen("Text3.txt","r");
    if(filepointer==NULL){
        printf("The file cannot be openned.");
    }
    else{
        printf("The words that have more than one numeric values are:\n");
        while(fscanf(filepointer,"%s",ch)){
            len = strlen(ch);
            count=0;
            for(i=0;i<len;i++){
                if(ch[i]>=48&&ch[i]<=57){
                    count++;
                }
            }
            if(count>1){
                printf("%s \n",ch);
            }
        }
    }
    return 0;
}
