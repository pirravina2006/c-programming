#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    switch(year){
        case 1:
        printf("under warranty");
        break;
        case 2:
        printf("limited warranty");
        break;
        case 3:
        printf("out of warranty");
        break;
        default:
        printf("Invalid number");
    }
}