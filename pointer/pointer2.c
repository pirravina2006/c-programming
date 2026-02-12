#include<stdio.h>
int max(int arr[],int n){
    int *p=arr;
    int maxi=*p;
    for(int i=0;i<n;i++){
        if(*(p+i)>maxi && maxi<1000){
            maxi=*(p+i);
        }
    }
    printf("%d",maxi);
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max(arr,n);
    return 0;
}