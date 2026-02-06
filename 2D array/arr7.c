#include<stdio.h>
int main(){
    int r;
    int c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int min;
    int k1=0;
    int temp1[k1];
    int k=0;
    for(int i=0;i<r;i++){
        min=a[i][k1];
        for(int j=0;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
            k1++;
            temp1[k]=min;
            k++;
            break;
        }
    }
    int max;
    int l=0;
    int m=0;
    int temp2[l];
    for(int j=0;j<c;j++){
        int max=a[j][l];
        for(int i=0;i<r;i++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        temp2[l]=max;
        l++;
        m++;
    }
    int count=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<l;j++){
            if(temp1[i]==temp2[j]){
                count=1;
            }
        }
        if(count==1){
            printf("%d",count);
            break;
        }
        else{
            printf("%d",count);
            break;
        }
    }
    return 0;
}