#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int min2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            if(min<=0){
                min2=arr[i+1];
            }
        }
        if(arr[i]>0){
            if(arr[i]<min){
                min=arr[i];
            }
        }
    }
    if(min>0){
        printf("%d",min);
    }
    else{
        printf("Enter positive number");
    }
}