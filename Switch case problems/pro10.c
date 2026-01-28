#include<stdio.h>
int main(){
    int val;
    scanf("%d",&val);
    int n=0;
    int n2=1;
    int sum=0;
    for(int i=1;i<=val;i++){
        printf("%d ",n);
        sum=n+n2;
        n=n2;
        n2=sum;
    }
    return 0;
}