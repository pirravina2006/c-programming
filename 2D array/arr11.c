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
            if(a[i][j]<=a[i][j+1]){
                if(a[i][j+1]<=a[i][j+2]){
                    count=1;
                    break;
                }
            }
            else{
                count=0;
                break;
            }
        }
        sum=sum+count;
    }
    printf("no.of.rows in sorted form : %d",sum);
}