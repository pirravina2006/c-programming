#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}