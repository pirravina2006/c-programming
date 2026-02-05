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
    int prime;
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            prime=1;
            for(int k=2;k<a[i][j];k++){
                if(a[i][j]%k==0){
                    prime=0;
                }
            }
            if(prime==1){
                count++;
            }
        }
    }
    printf("%d ",count);
}