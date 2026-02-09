#include<stdio.h>
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]=='a' || str[i]=='e' ||str[i]=='o' ||str[i]=='u' ||str[i]==i) && str[i]!=str[i+1]){
            count++;
        }
    }
    if(count>0){
        printf("%d",count+1);
    }
    else{
        count=0;
        printf("%d",count);
    }

}