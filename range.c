#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>10 && a<=20){
        printf("Number is within range");
    }
    else{
        printf("Number is not in range");
    }
}