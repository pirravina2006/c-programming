#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c;
    scanf("%d",&c);
    int i=1;
    int a;
    int sum=0;
    int k;
    int res;
    while(i<=n){
        scanf("%d",&a);
        sum=sum+a;
        if(sum<=c ){
            k=i;
            res=c-sum;
        }
    }
    printf("%d ",k);
    printf("%d",res);
}