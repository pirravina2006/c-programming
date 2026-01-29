#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int k=1;k<=4-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}