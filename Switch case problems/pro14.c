#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    int rem;
    int temp;
    for(;num>0;num=num/10){
        rem=num%10;
        temp=rem;
        if(temp%2==0){
            count=count+1;
        }
    }
    printf("%d",count);
}