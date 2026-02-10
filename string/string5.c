#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
    char res[20];
    int k=0;
    for(int i=strlen(str)-1;i>=0;i--){
        res[k]=str[i];
        k++;
    }
    res[k]='\0';
    int m=0;
    int diff=0;
    while(str[m]!='\0'){
        if(str[m]!=res[m]){
            diff=1;
            break;
        }
        m++;
    }
    if(diff==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}