#include<stdio.h>
int digit(int num){
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
    int num;
    scanf("%d",&num);
    digit(num);
}