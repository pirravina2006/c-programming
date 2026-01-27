#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("300");
        break;
        case 2:
        printf("800");
        break;
        case 3:
        printf("1500");
        break;
        default:
        printf("Invalid number");
    }
}