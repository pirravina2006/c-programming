#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int rev=0;
    int temp=num;
    for(;num>0;num=num/10){
        int rem=num%10;
        rev=rev*10+rem;
    }
    if(rev==temp){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
}