#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int temp[n]; 
    k=k%n;
    if(k==0){
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        return 0;
    }
    else{
        for(int i=0;i<k;i++){
            temp[i]=a[i];
        }
        for(int i=0;i<n-k;i++){
            a[i]=a[i+k];
        }
        for(int i=0;i<k;k++){
            a[n-i+k]=temp[i];
        }
        for(int j=0;j<n;j++){
            printf("%d ",a[j]);
        }
    }
}