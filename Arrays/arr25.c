#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1;
    int max2;
    int min1;
    int min2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    min1=a[0];
    min2=a[1];
    max1=a[n-1];
    max2=a[n-2];
    int res1=max1*max2;
    int res2=min1*min2;

    if(res1>res2){
        printf("%d",res1);
    }
    else{
        printf("%d",res2);
    }
    return 0;
}