#include<stdio.h>
int main(){
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int uni;
    for(int i=0;i<n;i++){
        uni=0;
        for(int j=0;j<m;j++){
            if(a[i][j]!=a[i][j+1]){
                uni=uni+1;
            }
            else{
                uni=0;
            }
        }
        if(uni==m){
            printf("%d",i);
        }
    }
}