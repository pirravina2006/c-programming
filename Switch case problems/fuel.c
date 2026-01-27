#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    int l;
    scanf("%d",&l);
    int cost;
    switch(c){
        case 1:
        cost=l*105;
        printf("%d",cost);
        break;
        case 2:
        cost=l*92;
        printf("%d",cost);
        break;
        case 3:
        cost=l*85;
        printf("%d",cost);
        break;
        default:
        printf("Invalid number");
    }
}