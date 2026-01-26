#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%3==0 && num%7==0){
        printf("The number is divisible by 3 and 7");
    }
    else{
        printf("The number is not divisible by 3 and 7");
    }
    return 0;
    
}