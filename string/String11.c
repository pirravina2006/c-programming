#include<stdio.h>
int main(){
    char str[30];
    fgets(str,30,stdin);
    int count=0;
    for(int i=0;i<9 && str[i]!='\0' ;i++){
        if(str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' ||str[i]=='8' || str[i]=='9' ||str[i]=='0'){
            count=count+1;
        }
    }
    printf("%d",count);
}