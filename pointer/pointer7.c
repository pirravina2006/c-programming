#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    fgets(str1,50,stdin);
    for(int i=0;i<50;i++){
        if(str1[i]=='\n'){
            str1[i]='\0';
        }
    }
    char rev[50];
    int k=0;
    char *a=str1;
    char *b=rev;
    int i=strlen(str1)-1;
    for(;i>=0;i--){
        *(b+k)=*(a+i);
        k++;
    }
    rev[k]='\0';
    for(int i=0;i<k;i++){
        if(*(b+i)=='\n'){
            *(b+i)='\0';
        }
    }
    int res=1;
    for(int i=0;i<k;i++){
        if(*(a+i)!=*(b+i)){
            res=0;
            break;
        }
    }
    if(res==1){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
}