#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int days;
    scanf("%d",&days);
    int tot;
    switch(type){
        case 1:
        if(days<=5){
            tot=days*50;
            printf("%d",tot);
        }
        else{
            printf("Invalid days");
        }
        break;
        case 2:
        if(days<=10){
            tot=days*100;
            printf("%d",tot);
        }
        else{
            printf("Invalid days");
        }
        break;
        case 3:
        if(days>=10){
            tot=days*200;
            printf("%d",tot);
        }
        else{
            printf("Invalid days");
        }
        break;
    }

}