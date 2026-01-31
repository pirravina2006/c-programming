#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int secmax=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];

        }
        else if(arr[i]>secmax && arr[i]!=max){
            secmax=arr[i];
        }
    }
    printf("%d",secmax);
}