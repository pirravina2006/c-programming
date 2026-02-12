#include<stdio.h>
int main(){
    char str[200];
    fgets(str,200,stdin);
    char *p=str;
    int count=0;
    for(int i=0;i<200 && *p!='\0';i++){
        if(*(p+i)==' '){
            count=count+1;
        }
    }
    printf("%d",count+1);
}