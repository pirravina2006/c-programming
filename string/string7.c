#include<stdio.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    int count=0;
    int cons=0;
    for(int i=0;i<20 && str[i]!='\0';i++){
        if(str[i]=='A' || str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
            count=count+1;
        }
        else{
            cons=cons+1;
        }
    }
    printf("%d",cons-1);
}