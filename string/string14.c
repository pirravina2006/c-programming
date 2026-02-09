#include<stdio.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    int k=0;
    int temp[k];
    for(int i=0;i<20 && str[i]!='\0';i++){
        temp[i]=str[i];
        k++;
    }

    for(int i=0;i<k;i++){
        printf("%c",temp[i]);
    }
}