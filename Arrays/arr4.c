#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array :");
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Reversed array:");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}