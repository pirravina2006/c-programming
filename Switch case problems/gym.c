#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("Membership fee 1500");
        break;
        case 2:
        printf("Membership fee 4000");
        break;
        case 3:
        printf("Membership fee 7000");
        break;
        default:
        printf("Invalid number");
    }
}