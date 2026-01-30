#include<stdio.h>
int main(){
    int w;
    scanf("%d",&w);
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int sum=0;
    while(i<=n){
        scanf("%d",&a);
        i++;
        sum=sum+a;
    }
    if(sum>w){
        printf("Passenger Allowed: %d",n-1);
        printf("\nOverload :Yes");
    }
    else{
        printf("Passenger Allowed: %d",n);
        printf("\nOverload :No");
    }
}