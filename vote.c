#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=18){
        printf("You are eligible to vote");
    }
    else{
        printf("you are not eligible to vote");
    }
    return 0;
    
}