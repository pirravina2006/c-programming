#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int j=i;j<5;j++){
            printf("*");
        }
        for(int j=i;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}