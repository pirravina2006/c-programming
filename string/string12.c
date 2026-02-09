#include<stdio.h>
int main(){
    char str[30];
    fgets(str,30,stdin);
    int count=0;
    for(int i=0;i<9 && str[i]!='\0' ;i++){
        if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' ||str[i]=='*' || str[i]=='(' ||str[i]==')'){
            count=count+1;
        }
    }
    printf("%d",count);
}