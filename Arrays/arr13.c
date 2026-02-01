#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int avg=sum/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            count=count+1;
        }
    }
    printf("%d",count);
}