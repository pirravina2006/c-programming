#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(p+i));
    }
    return 0;
}