#include<stdio.h>
int main(){
    char str1[50];
    fgets(str1,50,stdin);
    int k=0;
    char temp[k];
    char *a=str1;
    char *b=temp;
    for(int i=0;i<50 && *(a+i)!='\0';i++){
        *(b+i)=*(a+i);
        k++;
    }
    *(a+k)='\0';
    for(int i=0;i<k;i++){
        printf("%c",*(b+i));
    }
}
