#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int mid;
    if(n>1){
        mid=n/2;
    }else{
        mid=n;
    }
    int sum=0;
    for(int i=0;i<=mid;i++){
        sum=sum+i;
    }
    int res=n-sum;
    if(res<0){
        printf("%d",res);
    }else{
        printf("Result : %d",res);
    }
}