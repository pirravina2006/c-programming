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
    int val=a[0][0];
    int count=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==val){
                count=0;
            }
            else{
                count=1;
            }
        }
        if(count==1){
            printf("%d",count);
            break;
        }
    }
    return 0;
}