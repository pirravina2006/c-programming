#include<stdio.h>
int main(){
    char str[50];
    fgets(str,20,stdin);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count=count+1;
        i++;
    }
    printf("%d",count-1);
}