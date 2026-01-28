#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rev=0;
    int sum=0;
    int temp=num;
    for(;num>0;num=num/10){
        int rem=num%10;
        rev=rev*10+rem;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;

    }
    if(sum==temp){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
}