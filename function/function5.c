#include<stdio.h>
int sum(int num){
    int sum=0;
    int rem;
    for(;num>0;num=num/10){
        rem=num%10;
        sum=sum+rem;
    }
    printf("%d",sum);
}
int main(){
    int num;
    scanf("%d",&num);
    sum(num);
}