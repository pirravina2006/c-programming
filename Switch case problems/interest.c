#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int years;
    scanf("%d",&years);
    switch(type){
        case 1:
        printf("Interest 4%%");
        break;
        case 2:
        if(years<=3 && years>0){
            printf("Interest 5%%");
        }
        else{
            printf("Interest 7%%");
        }
        break;
        default:
        printf("Enter 1 or 2");
    }
}