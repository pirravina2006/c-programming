#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(;num>0;num=num/10){
        int rem=num%10;
        sum=sum+rem;
    }
    printf("%d ",sum);
    return 0;
}