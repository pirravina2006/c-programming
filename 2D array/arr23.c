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
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || i==r-1 ||j==0 || j==c-1){
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}