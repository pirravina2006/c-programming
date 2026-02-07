#include<stdio.h>
int main(){
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int min;
    int max;
    int k=0;
    int res;
    int count=0;
    for(int i=0;i<r;i++){
        max=a[i][k];
        min=a[i][k];
        for(int j=0;j<c;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
        res=max-min;
        k++;
        if(res<=1000){
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}