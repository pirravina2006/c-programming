#include<stdio.h>
int main(){
    int mode;
    scanf("%d",&mode);
    int km;
    scanf("%d",&km);
    int to;
    switch (mode){
        case 1:
        to=km*10;
        printf("%d",to);
        break;
        case 2:
        to=km*15;
        printf("%d",to);
        break;
        case 3:
        to=km*20;
        printf("%d",to);
        break;
        default:
        printf("Invalid number");
    }
}