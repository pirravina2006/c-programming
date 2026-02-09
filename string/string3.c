#include<stdio.h>
int main(){
    char str[30];
    fgets(str,30,stdin);
    for(int i=0;i<30 && str[i]!='@';i++){
        printf("%c",str[i]);
    }
}