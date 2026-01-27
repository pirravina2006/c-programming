#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("40 Mbps");
        break;
        case 2:
        printf("100 Mbps");
        break;
        case 3:
        printf("300 Mbps");
        break;
        default:
        printf("Invalid number");
    }
}