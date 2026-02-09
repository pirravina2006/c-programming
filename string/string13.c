#include<stdio.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<20 && str[i]!='\0';i++){
        if(str[i]==ch){
            printf("%d",i);
            return 0;
        }
        else{
            printf("-1");
            break;
        }
    }
}