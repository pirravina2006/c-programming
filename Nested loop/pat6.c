#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);

    for(int i=r;i>0;i--){
        for(int j=i;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}