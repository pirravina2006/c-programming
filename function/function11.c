#include<stdio.h>
long long  int digit(long long int num){
    int rem;
    int count=0;
    while(num>0){
        rem=num%10;
        count++;
        num=num/10;
    }
    printf("%d",count);
}
int main(){
    long long int num;
    scanf("%d",&num);
    digit(num);
}
