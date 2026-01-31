#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int rep=x;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            count=count+1;
        }
        else{
            if(arr[i+1]==arr[i]){
                count=count+1;
            }
        }
    }
    printf("%d",count);
}