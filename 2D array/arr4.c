#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    int count;
    int val=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            count=0;
            for(int k=0;k<j;k++){
                if(a[i][j]==a[k][i]){
                    count=count+1;
                }
            }
        }
        if(count==1){
            printf("Output is : %d",i);
        }
    }
}