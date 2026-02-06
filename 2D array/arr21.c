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
    int count;
    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c;j++){
            if(a[i][j]%2!=0 && a[i][j+1]%2==0){
                count=count+1;
            }
        }
        if(count>0){
            printf("%d ",i);
            break;
        }
    }
    return 0;
}