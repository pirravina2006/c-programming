#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    printf("%d",sum);
    return 0;
}