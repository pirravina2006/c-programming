#include<stdio.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    int count=0;
    for(int i=0;i<20 && str[i]!='\0';i++){
        if(str[i]==' '){
            count=count+1;
        }
    }
    printf("%d",count+1);
}