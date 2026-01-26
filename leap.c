#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if((year %4==0 && year%100!=0)|| year%400==0){
        printf("Year is leap year");
    }
    else{
        printf("Year is not leap year");
    }
    return 0;
    
}