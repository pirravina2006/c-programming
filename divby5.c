#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num%5==0){
        printf("The number is divisible by 5");
    }
    else{
        printf("The number is not divisible by 5");
    }
    return 0;
    
}