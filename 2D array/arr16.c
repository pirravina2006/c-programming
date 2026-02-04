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
    int sum;
    int k=0;
    int temp[k];
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum=sum+a[i][j];
        }
        temp[k]=sum;
        k++;
    }
    int min=temp[0];
    for(int i=0;i<k;i++){
        if(temp[i]<min){
            min=temp[i];
        }
        else{
            if(min==0){
                min=temp[i+1];
            }
            else{
                min=min;
            }
        }
    }
    printf("%d",min);
}