#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int res=n*(n+1)/2;
    int diff=res-sum;
    printf("%d",diff);
}