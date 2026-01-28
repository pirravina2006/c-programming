#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rev;
    int sum=0;
    int temp=num;
    for(;num>0;num=num/10){
        int rem=num%10;
        sum=sum+(rem*rem*rem);
    }
    if(sum==temp){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }
}