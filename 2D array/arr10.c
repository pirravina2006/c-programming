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
    int pro;
    int k=0;
    int temp[k];
    for(int i=0;i<r;i++){
        pro=1;
        for(int j=0;j<c;j++){
            pro=pro*a[i][j];
        }
        temp[k]=pro;
        k++;
    }
    int res=0;
    int max=temp[0];
    for(int i=0;i<k;i++){
        if(temp[i]>max){
            max=temp[i];
            res=i;
        }
    }
    printf("%d",res);
}
