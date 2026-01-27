#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("500");
        break;
        case 2:
        printf("1200");
        break;
        case 3:
        printf("500");
        break;
        default:
        printf("Invalid number");
    }
}