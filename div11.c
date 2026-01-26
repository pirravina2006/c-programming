#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%11==0){
        printf("The number is divisible by 11");
    }
    else{
        printf("The number is not divisible by 11");
    }
}