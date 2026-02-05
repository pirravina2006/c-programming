#include<stdio.h>
int main(){
    int r,c;
    scanf("%d\n%d",&r,&c);
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
            if(a[i][j]==a[i][c-1]){
                count=1;
                break;
            }
            else{
                count=0;
                break;
            }
        }
        sum=count+sum;
    }
    printf("%d",sum);
    return 0;
}