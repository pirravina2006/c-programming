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
    int sum;
    int avg;
    int count;
    int k=0;
    int min[k];
    for(int i=0;i<r;i++){
        sum=0;
        avg=0;
        for(int j=0;j<c;j++){
            sum=sum+a[i][j];
            count++;
        }
        avg=sum/(r*c);
        // printf("\n%d",avg);
        min[k]=avg;
        k++;
    }

    int min1=min[0];
    for(int i=0;i<k;i++){
        if(min[i]<min1){
            min1=min[i];
        }
        else{
            min1=min1;
        }
    }
    printf("%d",min1);
    return 0;
}