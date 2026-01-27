#include<stdio.h>
int main(){
    int order;
    scanf("%d",&order);
    int speed;
    scanf("%d",&speed);
    switch(speed){
        case 1:
        printf("Delivery 50");
        break;
        case 2:
        if(order<1000){
            printf("Delivery 100");
        }
        else{
            printf("Free");
        }
        break;
        default:
        printf("Enter 1 or 2");
    }
}