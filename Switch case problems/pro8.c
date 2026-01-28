#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rev=0;
    for(;num!=0;num=num/10){
        int rem=num%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;
}