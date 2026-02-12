#include<stdio.h>
int main(){
    char str1[50];
    char str2[50];
    fgets(str1,50,stdin);
    fgets(str2,50,stdin);
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]=='\n'){
            str1[i]='\0';
            break;
        }
    }
    for(int i=0;str2[i]!='\0';i++){
        if(str2[i]=='\n'){
            str2[i]='\0';
            break;
        }
    }
    char *a=str1;
    char *b=str2;
    char res[100];
    char *r=res;
    int k=0;
    for(int i=0;i<50 && *(a+i)!='\0';i++){
        *(r+i)=*(a+i);
        k++;
    }
    for(int i=0;i<50 && *(b+i)!='\0';i++){
        *(r+k)=*(b+i);
        k++;
    }
    *(r+k)='\0';
    printf("%s",res);
    return 0;
}