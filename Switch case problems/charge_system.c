#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int trip;
    scanf("%d",&trip);
    int am;
    switch (type){
        case 1:
        if(trip==1){
            printf("100");
        }
        else if(trip>=2 && trip<=10){
            printf("800");
        }
        else{
            printf("800");
        }
        break;
        case 2:
        am=240;
        trip=trip*240;
        printf("%d",trip);
        break;
        default:
        printf("Enter valid type");
    }
}