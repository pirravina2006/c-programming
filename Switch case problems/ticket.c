#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int time;
    scanf("%d",&time);
    int sp=150;
    int gp=250;
    switch(type){
        case 1:
        if(time>0 && time<18){
            sp=150;
            printf("Ticket price is:%d",sp);
        }
        else if(time>=18 && time<=24){
            sp=sp+50;
            printf("Ticket price is : %d",sp);
        }
        break;
        case 2:
        if(time>0 && time<18){
            gp=250;
            printf("Ticket price is:%d",gp);
        }
        else if(time>=18 && time<=24){
            gp=gp+50;
            printf("Ticket price is : %d",gp);
        }
        break;
        default:
        printf("Invalid type");
    }
}