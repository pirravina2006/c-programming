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
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+a[i][j];
        }
    }
    int sum2;
    int dif;
    int k=0;
    int temp[k];
    for(int i=0;i<r;i++){
        sum2=0;
        for(int j=0;j<c;j++){
            sum2=sum2+a[i][j];
        }
        dif=sum-sum2;
        temp[k]=dif;
        k++;
    }
    int min=temp[0];
    int max=temp[0];
    for(int i=0;i<k;i++){
        if(temp[i]<min){
            min=temp[i];
        }
        else{
            min=min;
        }
    }
    for(int i=0;i<k;i++){
        if(temp[i]>max){
            max=temp[i];
        }
        else{
            max=max;
        }
    }
    int res=max-min;
    printf("%d",res);
}