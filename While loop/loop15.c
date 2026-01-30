#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int a;
    int sum1=0;
    int sum2=0;
    int count=0;
    while(i<=n){
        scanf("%d",&a);
        if(a>4){
            sum1=sum1+a;
            count=count+1;
        }
        else{
            sum2=sum2+a;
        }
        i++;
    }
    printf("Total overtime:%d\n",sum1+sum2);
    printf("Burntout days : %d",count);
}