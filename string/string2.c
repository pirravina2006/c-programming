#include<stdio.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    char name;
    int i;
    for(i=0;i<20 && str[i]!='\0';i++){
        if(str[i]>65 && str[i]<=90){
            name=str[i];
        }
    }
    printf("%c" ,str[i]);
}