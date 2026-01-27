#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int age;
    scanf("%d",&age);
    switch(type){
        case 1:
        if(age<=5){
            printf("5000");
        }
        else{
            printf("2500");
        }
        break;
        case 2:
        if(age<=5){
            printf("4000");
        }
        else{
            printf("6000");
        }
        break;
        default:
        printf("Enter 1 or 2 type");
    }
}