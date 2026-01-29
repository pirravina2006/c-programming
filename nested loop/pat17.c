#include<stdio.h>
int main(){
    char ch='A';
    for(int i=1;i<=5;i++){
        for(int k=5;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("%c",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }
}