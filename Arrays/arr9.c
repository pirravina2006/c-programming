#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[n-1];
    int temp[n];
    int k=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]>=max){
            max=a[i];
            temp[k]=max;
            k++;
        }
        else if(a[i]>max && a[i]!=max){
            temp[k]=max;
            k++; 
        }
    }
    for(int i=k-1;i>=0;i--){
        printf("%d ",temp[i]);
    }
}
