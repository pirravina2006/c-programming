#include<stdio.h>
int main(){
    int r,c;
    scanf("%d\n%d",&r,&c);
    int a[r][c];
    int k=0;
    int temp[k];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum1=0;
    for(int i=0;i<=r/2;i++){
        for(int j=0;j<=c/2;j++){
            if(i==j){
                sum1=sum1+a[i][j];
            }
            else if(i>j || i<j){
                sum1=sum1+a[i][j];
            }
        }
    }
    temp[k]=sum1;
    k++;
    int sum2=0;
    for(int i=0;i<=r/2;i++){
        for(int j=1;j<c;j++){
            if(i==j){
                sum2=sum2+a[i][j];
            }
            else if(i>j || i<j){
                sum2=sum2+a[i][j];
            }
        }
    }
    temp[k]=sum2;
    k++;
    int sum3=0;
    for(int i=1;i<r;i++){
        for(int j=0;j<=c/2;j++){
            if(i==j){
                sum3=sum3+a[i][j];
            }
            else if(i>j || i<j){
                sum3=sum3+a[i][j];
            }
        }
    }
    temp[k]=sum3;
    k++;
    int sum4=0;
    for(int i=r/2;i<r;i++){
        for(int j=c/2;j<c;j++){
            if(i==j){
                sum4=sum4+a[i][j];
            }
            else if(i>j ||i<j){
                sum4=sum4+a[i][j];
            }
        }
    }
    temp[k]=sum4;
    k++;
    int max=temp[0];
    for(int i=0;i<k;i++){
        if(temp[i]>max){
            max=temp[i];
        }
    }
    printf("%d",max);
    return 0;
}
