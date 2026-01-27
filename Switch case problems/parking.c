#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int hour;
    scanf("%d",&hour);
    switch(type){
        case 1:
        if(hour >=1 && hour<=24){
            hour=10*hour;
            printf("Parking fee : %d",hour);
        }
        else{
            printf("Invalid hour");
        }
        break;
        case 2:
        if(hour>=1 && hour<=24){
            hour=hour*20;
            printf("Parking fee : %d",hour);
        }
        else{
            printf("Invalid hour");
        }
        break;
        default:
        printf("Parking fee : 20");
    }
}