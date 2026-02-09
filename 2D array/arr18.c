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
    int max;
    int k=0;
    int j;
    int d=0;
    int b=0;
    int temp1[d];
    int temp2[b];
    for(int i=0;i<r;i++){
        min=a[i][k];
        max=a[i][k];
        for(j=0;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];
            }
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
        temp1[b]=max;
        b++;
        temp2[d]=min;
        d++;
    }
    int n=temp1[0];
    for(int i=0;i<b;i++){
        if(temp1[i]>n){
            n=temp1[i];
        }
    }

    printf("\n");
    int m=temp2[0];
    for(int j=0;j<d;j++){
        if(temp2[j]<m){
            m=temp2[j];
        }
    }
    int res=n-m;
    printf("%d",res);
    return 0;
}