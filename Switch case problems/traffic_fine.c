#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("1000");
        break;
        case 2:
        printf("1500");
        break;
        case 3:
        printf("2000");
        break;
        default:
        printf("Invalid number");
    }
}