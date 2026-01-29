#include<stdio.h>
int main(){
    int ch='A';
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%c ",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }
    return 0;
}