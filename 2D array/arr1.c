#include<stdio.h>
int main(){
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int max=arr[0][0];
    int secmax=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]>max){
                secmax=max;
                max=arr[i][j];
            }
            else if(arr[i][j]>secmax && arr[i][j]!=max){
                secmax=arr[i][j];
            }
        }
    }
    printf("%d",secmax);
}
