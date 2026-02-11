#include<stdio.h>
int leap(int num){
    if((num%4==0 && num%100!=0) || num%400==0){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}
int main(){
    int ye;
    scanf("%d",&ye);
    leap(ye);
}