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
    int count;
    int sum=0;
    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c;j++){
            if(a[i][j]!=a[i][j+1]){
                count++;
            }
            else{
                count=0;
                break;
            }
        }
        if(count==r){
            sum=sum+1;
        }
    }
    printf("%d",sum);
    return 0;
}