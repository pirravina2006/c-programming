#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int k=0;k<4-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int j=i;j<4;j++){
            printf("*");
        }
        for(int j=i;j<=4;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}