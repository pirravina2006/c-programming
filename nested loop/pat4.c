#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);
    int num=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
        }
        printf("\n");
        num++;
    }
    return 0;
}