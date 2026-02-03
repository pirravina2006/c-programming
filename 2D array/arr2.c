#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0];
    int secmax=a[0][0];
    int min=a[0][0];
    int secmin=100;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>max){
                secmax=max;
                max=a[i][j];
            }
            else if(a[i][j]>secmax && a[i][j]!=max){
                secmax=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]<min){
                secmin=min;
                min=a[i][j];
            }
            else if(a[i][j]<secmin && a[i][j]!=min){
                secmin=a[i][j];
            }
        }

    }
    printf("%d\n",min);
    printf("%d\n",secmin);
    int res=max*secmax;
    int res2=min*secmin;
    if(res>res2){
        printf("%d",res);
    }
    else{
        printf("%d",res2);
    }
}