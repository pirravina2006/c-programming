#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum;
    int max;
    int index=0;
    for(int j=0;j<c;j++){
        sum=0;
        for(int i=0;i<r;i++){
            sum=sum+a[i][j];
        }
        if(j==0 ||sum>max){
            max=sum;
            index=j;
        }
    }
    printf("%d",index);
    return 0;
}