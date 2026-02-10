#include<stdio.h>
int palindrome(int num){
    int rem;
    int rev=0;
    int temp=num;
    for(;num>0;num=num/10){
        rem=num%10;
        rev=rev*10+rem;
    }
    if(temp==rev){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    palindrome(num);
}