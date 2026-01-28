#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    for(;num>0;num=num/10){
        int rem=num%10;
        count++;
    }
    printf("%d",count);
    return 0;
}