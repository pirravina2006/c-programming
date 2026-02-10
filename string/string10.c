#include<stdio.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    int a;
    for(int i=0;i<20 && str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<=90){
            a=str[i]+32;
            printf("%c",a);
        }
    }
    return 0;
}