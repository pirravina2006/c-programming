#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int time;
    scanf("%d",&time);
    switch(type){
        case 1:
        if(time>0 && time<=24){
            printf("Anytime access");
        }
        break;
        case 2:
        if(time>=9 && time<=18){
            printf("Limited Access");
        }
        else{
            printf("Access Denied");
        }
        break;
        default:
        printf("Invalid type");
    }
}