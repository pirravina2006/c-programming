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
            for(int k=1;k<c;k++){
                if(a[i][j]%k==0){
                    count=count+1;
                }
                else{
                    count=0;
                }
            }
            if(count==2){
                sum=sum+1;
                break;
            }
        }
    }
    printf("%d",sum);
}